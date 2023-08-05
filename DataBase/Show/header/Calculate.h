//
// Created by Stark on 2023/6/29.
//

#ifndef PUBLICSLOTS_CALCULATE_H
#define PUBLICSLOTS_CALCULATE_H

#include "Handle.h"

class Calculate :public Handle {
public:
    Calculate();
    Calculate(const char *host, const char *user, const char *passwd, const char *db, unsigned int port,
              const char *unixSocket, unsigned long clientflag, const std::list<std::string> &query);

    int calcavg();

    std::string average;

};

#endif //PUBLICSLOTS_CALCULATE_H
