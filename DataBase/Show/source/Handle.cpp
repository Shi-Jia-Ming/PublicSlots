//
// Created by Stark on 2023/6/26.
//

#include "../header/Handle.h"
#include <mysql.h>

#include <utility>

Handle::Handle() {
    // 连接MySQL数据库
    mysql_init(&mysql);
    if (!mysql_real_connect(&mysql, "localhost", "root", "password", "students", 0, nullptr, 0)) {
        // 连接失败
        std::cout << "Failed to connect the database!" << std::endl;
    } else {
        // 连接成功
        std::cout << "Successfully connected the database!" << std::endl;
    }

    // 获取数据集，初始值为全部表格
    std::string tmpquery = "select * from student_information order by id";
    mysql_real_query(&mysql, tmpquery.c_str(), tmpquery.length());
    this->res = mysql_store_result(&mysql);

    // 获取表格的列数
    this->num_columns = mysql_num_fields(res);
    // 获取表格的行数
    this->num_rows = mysql_num_rows(res);
    // 获取字段名
    this->fieldname = mysql_fetch_field(res);
}



Handle::Handle(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
               const char *unix_socket, unsigned long clientflag, const std::list<std::string> &query) {
    // 连接MySQL数据库
    mysql_init(&mysql);
    if (!mysql_real_connect(&mysql, host, user, passwd, db, port, unix_socket, clientflag)) {
        // 连接失败
        std::cout << "Failed to connect the database!" << std::endl;
    } else {
        // 连接成功
        std::cout << "Successfully connected the database!" << std::endl;

        // 初始化MySQL语句
        this->query = query;
        // 获取数据集，初始值为全部表格
        std::string tmpquery = "select * from student_information order by id";
        mysql_real_query(&mysql, tmpquery.c_str(), tmpquery.length());
        this->res = mysql_store_result(&mysql);

        // 获取表格的列数
        this->num_columns = mysql_num_fields(res);
        // 获取表格的行数
        this->num_rows = mysql_num_rows(res);
        // 获取字段名
        this->fieldname = mysql_fetch_field(res);

        /* 输出表格内容代码
        // 输出表头内容
        for (auto t = 0; t < this->num_columns; ++t) {
            std::cout << this->fieldname[t].name << '\t';
        }
        std::cout << '\n';

        // 输出表格内容
        // 从第一行开始检索
        MYSQL_ROW row = mysql_fetch_row(res);
        while (row) {
            for (auto t = 0; t < this->num_columns; ++t) {
                std::cout << row[t] << '\t';
            }
            std::cout << '\n';
            // 检索结果集的下一行
            row = mysql_fetch_row(res);
        }
        */
    }
}

// 进行排序打印
int Handle::sort() {
    int flag;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to sort!" << std::endl;
            return 1;
        }
    }
    // 输出排序结果
    this->res = mysql_store_result(&mysql);


    this->showform();

}

// 进行数据筛选
int Handle::screen() {
    int flag;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "筛选失败" << std::endl;
            return 1;
        }
    }
    // 输出排序结果
    this->res = mysql_store_result(&mysql);

    std::cout << "列数：" << this->num_columns << std::endl;
    std::cout << "行数：" << this->num_rows << std::endl;

    this->showform();
}



// 直接打印表格，使用之前确保this->res绑定了表格
int Handle::showform() const {
    // 输出表头内容
    for (auto t = 0; t < this->num_columns; ++t) {
        std::cout << this->fieldname[t].name << '\t';
    }
    std::cout << '\n';

    /* 输出表格内容：res会记录mysql_fetch_row的位置，如果现在进行遍历，后续遍历的时候row会直接变成res的末尾；
     从第一行开始检索
    MYSQL_ROW row = mysql_fetch_row(res);
    while (row) {
        for (auto t = 0; t < this->num_columns; ++t) {
            std::cout << row[t] << '\t';
        }
        std::cout << '\n';
        // 检索结果集的下一行
        row = mysql_fetch_row(res);
    }
     */

    return 0;
}


Handle::~Handle() {
    this->query.clear();
    mysql_free_result(this->res);
    mysql_close(&(this->mysql));
}

void Handle::setQuery(std::list<std::string> tmpquery) {
    this->query = std::move(tmpquery);
}


