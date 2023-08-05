//
// Created by Stark on 2023/6/26.
//

#include "../header/Modify.h"

Modify::Modify(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
               const char *unix_socket, unsigned long clientflag, const std::list<std::string> &query)
               :Manage(host, user, passwd, db, port, unix_socket, clientflag){
    this->query = query;
}

int Modify::ModifyForm() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to modify the student information!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully modified the student information!" << std::endl;
    return 0;
}


