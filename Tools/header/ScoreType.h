//
// Created by Stark on 2023/6/28.
//

#ifndef MYSQL_SCORETYPE_H
#define MYSQL_SCORETYPE_H

#include <iostream>
#include <string>
#include <list>
#include <QString>

// 定义类，对成绩进行封装
class ScoreType {
public:
    int add(const std::string& subject, int score);
    // 重载函数，可以接收QString
    [[maybe_unused]] int add(const QString& subject, int score);

    std::list<int> getScores();


private:
    std::list<std::string> subjects;
    std::list<int> scores;
};

#endif //MYSQL_SCORETYPE_H
