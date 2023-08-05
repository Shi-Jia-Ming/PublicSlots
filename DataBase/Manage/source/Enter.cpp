//
// Created by Stark on 2023/6/26.
//

#include "../header/Enter.h"


Enter::Enter(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
             const char *unix_socket, unsigned long clientflag, const std::list<std::string> &query)
            : Manage(host, user, passwd, db, port, unix_socket, clientflag) {
    this->query = query;
}

int Enter::transadd() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to add student information!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully added student information!" << std::endl;
    return 0;
}

int Enter::direadd() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to add field!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully added field!" << std::endl;
    return 0;
}

int Enter::transpop() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to delete student information!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully deleted student information!" << std::endl;
    return 0;
}

int Enter::direpop() {
    int flag = 0;
    for (const auto& sentence : this->query) {
        flag = mysql_real_query(&(this->mysql), sentence.c_str(), sentence.length());
        if (flag) {
            // MySQL操作失败
            std::cout << "Failed to delete the field!" << std::endl;
            return 1;
        }
    }
    std::cout << "Successfully deleted the field!" << std::endl;
    return 0;
}

