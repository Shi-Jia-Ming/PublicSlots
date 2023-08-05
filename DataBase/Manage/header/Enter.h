//
// Created by Stark on 2023/6/26.
//
// 主要实现表格数据的增加和删除
#ifndef MYSQL_ENTER_H
#define MYSQL_ENTER_H

#include <iostream>
#include "Manage.h"

class Enter :public Manage{
public:
    Enter(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
          const char *unix_socket, unsigned long clientflag, const std::list<std::string>& query);

    // 横向录入数据：录入学生信息
    int transadd();
    // 纵向录入数据：自定义考核方式
    int direadd();
    // 横向删除数据
    int transpop();
    // 纵向删除数据
    int direpop();
};



#endif //MYSQL_ENTER_H
