//
// Created by Stark on 2023/6/26.
//
// 主要实现数据的备份功能
#ifndef MYSQL_BACKUP_H
#define MYSQL_BACKUP_H

#include <iostream>
#include "Manage.h"

class Backup : public Manage {
public:
    Backup(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
           const char *unix_socket, unsigned long clientflag, const std::list<std::string>& query);

    // 执行备份操作
    int backup();

    // 执行恢复操作
    int restore();

private:
    // 指定备份文件的路径，供后续优化使用
    std::string filepath;
};


#endif //MYSQL_BACKUP_H
