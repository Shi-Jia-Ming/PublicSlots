//
// Created by Stark on 2023/6/26.
//

#include "../header/Backup.h"
#include "../../../Tools/header/tools.h"
#include <iostream>
#include <fstream>
#include <vector>

// 构造函数，对父类进行初始化，并对MySQL赋值语句进行初始化
Backup::Backup(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
               const char *unix_socket, unsigned long clientflag, const std::list<std::string>& query)
               : Manage(host, user, passwd, db, port, unix_socket, clientflag) {
    // 不能使用列表初始化
    this->query = query;
}


// 执行备份操作
int Backup::backup() {
    int flag;
    // 如果本地有备份文件，先删除本地备份文件
    std::string file = R"(F:\\MySQL\\io\\in.csv)";
    const char *savePath = file.c_str();
    if (remove(savePath)) {
        std::cout << "Failed to delete the original backup!" << std::endl;
    } else
        std::cout << "Successfully deleted the original backup!" << std::endl;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to backup!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully backup!" << std::endl;
    return 0;
}

// 执行恢复操作
int Backup::restore() {
    // 打开备份文件确定数据库表的表头
    std::ifstream readFile;

    readFile.open(R"(F:\\MySQL\\io\in.csv)", std::ios::in);
    if (readFile.is_open()) {
        std::cout << "Successfully open the file!" << std::endl;
        char field[100] = {0};        // fieldname中存放从csv文件中获取的表头名字
        readFile >> field;
        readFile.close();


        // 字符串处理
        // 将双引号换成空格
        for (auto &i: field) {
            if (i == '\"') i = ' ';
        }
        // 将字符串分割
        std::vector<std::string> res = split(field, ",");

        // 将之前的数据库删除并新建数据库
        this->query.clear();
        this->query.emplace_back(R"(use students;)");
        this->query.emplace_back(R"(set character_set_client = utf8mb4;)");
        this->query.emplace_back(R"(drop table if exists `student_information`;)");
        int flag;
        for (const auto &sentence: this->query) {
            flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
            if (flag) {
                // MySQL操作失败
                std::cout << "Failed to delete the table!" << std::endl;
                return 1;
            }
        }
        std::cout << "Successfully deleted the table!" << std::endl;

        // 创建表格的语句
        std::string tmpquery = "create table student_information(\n";
        tmpquery.append(res[0] + "int(255) default null");
        tmpquery.append(") ENGINE=InnoDB AUTO_INCREMENT=119 DEFAULT CHARSET=utf8;");
        flag = mysql_real_query(&(this->mysql), tmpquery.c_str(), tmpquery.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to create the table!" << std::endl;
            return 1;
        } else {
            std::cout << "Successfully created the table!" << std::endl;
        }

        // 为表格增添字段
        query.clear();
        tmpquery = "alter table student_information add";
        tmpquery.append(res[1]);
        tmpquery.append("varchar(255) default null");
        query.emplace_back(tmpquery);
        for (int i = 2; i < res.size(); ++i) {
            tmpquery = "alter table student_information add";
            tmpquery.append(res[i]);
            tmpquery.append("int(255) default null");
            query.emplace_back(tmpquery);
        }
        query.emplace_back(R"(set sql_mode = '';)");
        query.emplace_back(
                R"(load data infile 'F:\\MySQL\\io\\in.csv' into table student_information fields terminated by ',' optionally enclosed by '\"' lines terminated by '\r\n' ignore 1 rows;)");
        for (const auto &sentence: this->query) {
            flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
            if (flag) {
                // MySQL操作失败
                std::cout << "Failed to restore the data!" << std::endl;
                return 1;
            }
        }
        std::cout << "Successfully restored the data!" << std::endl;

        return 0;
    } else {
        std::cout << "Failed to open the file!" << std::endl;
        return 1;
    }
}

