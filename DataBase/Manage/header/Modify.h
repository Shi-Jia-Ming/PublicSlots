//
// Created by Stark on 2023/6/26.
//
// 主要实现数据的修改功能
#ifndef MYSQL_MODIFY_H
#define MYSQL_MODIFY_H

#include <iostream>
#include <list>
#include "Manage.h"

class Modify : Manage {
public:
    Modify(const char *host, const char *user, const char *passwd, const char *db,unsigned int port,
           const char *unix_socket, unsigned long clientflag, const std::list<std::string>& query);

    // 定义函数，修改表格数据
    int ModifyForm();



};

#endif //MYSQL_MODIFY_H
