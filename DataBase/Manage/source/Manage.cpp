//
// Created by Stark on 2023/6/26.
//

#include "../header/Manage.h"
#include <iostream>
#include <utility>
#include <mysql.h>

// 管理系统的构造函数连接数据库
Manage::Manage(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
               const char *unix_socket, unsigned long clientflag) {
    // 连接MySQL数据库
    mysql_init(&mysql);
    if (!mysql_real_connect(&mysql, host, user, passwd, db, port, unix_socket, clientflag)) {
        // 连接失败
        std::cout << "Failed to connect the database!" << std::endl;
    } else {
        // 连接成功
        std::cout << "Successfully connected the database!" << std::endl;
    }
}

Manage::~Manage() {
    // 删除query列表
    query.clear();
    // 关闭MySQL连接
    mysql_close(&mysql);
}

[[maybe_unused]] int Manage::setQuery(std::list<std::string> tmpquery) {
    this->query = std::move(tmpquery);
    return 0;
}
