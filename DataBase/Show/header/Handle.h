//
// Created by Stark on 2023/6/26.
//
// 主要实现用户表格的排序、筛选和显示
#ifndef MYSQL_HANDLE_H
#define MYSQL_HANDLE_H

#include <iostream>
#include <mysql.h>
#include <list>

class Handle {
public:
    Handle();
    Handle(const char *host, const char *user, const char *passwd, const char *db,unsigned int port,
           const char *unix_socket, unsigned long clientflag, const std::list<std::string>& query);

    // 进行排序打印
    int sort();

    // 进行数据筛选
    int screen();

    // 更新query
    void setQuery(std::list<std::string> query);


    ~Handle();

    // 存放结果集
    MYSQL_RES *res{};
    // 存放表头信息
    MYSQL_FIELD *fieldname{};
    // 表格的列数
    unsigned int num_columns{};
    // 表格的行数
    unsigned int num_rows{};

protected:
    // MySQL语句
    std::list<std::string> query;
    // MySQL连接句柄
    MYSQL mysql{};


    // 直接打印表格，使用之前确保this->res绑定了表格
    int showform() const;


};

#endif //MYSQL_HANDLE_H
