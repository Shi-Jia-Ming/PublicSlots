//
// Created by Stark on 2023/6/26.
//
// 父类，主要实现表格的各种编辑
#ifndef MYSQL_MANAGE_H
#define MYSQL_MANAGE_H

#include <iostream>
#include <mysql.h>
#include <string>
#include <list>


class Manage {
public:
    Manage(const char *host,
           const char *user,
           const char *passwd,
           const char *db,
           unsigned int port,
           const char *unix_socket,
           unsigned long clientflag);


    [[maybe_unused]] int setQuery(std::list<std::string> tmpquery);

    ~Manage();

protected:
    // MySQL语句
    std::list<std::string> query;
    // mysql连接句柄
    MYSQL mysql{};
};

#endif //MYSQL_MANAGE_H
