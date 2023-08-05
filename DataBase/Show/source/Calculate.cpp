//
// Created by Stark on 2023/6/29.
//
// 用于计算指定字段的中位数
#include "../header/Calculate.h"

Calculate::Calculate() : Handle() {};

Calculate::Calculate(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
                     const char *unixSocket, unsigned long clientflag, const std::list<std::string> &query) : Handle(
        host, user, passwd, db, port, unixSocket, clientflag, query) {}

int Calculate::calcavg() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to calculate!" << std::endl;
            return 1;
        }
    }
    // 输出排序结果
    this->res = mysql_store_result(&mysql);
    MYSQL_ROW row = mysql_fetch_row(res);
    this->average = row[0];
}
