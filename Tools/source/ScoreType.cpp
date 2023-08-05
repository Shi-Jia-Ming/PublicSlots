//
// Created by Stark on 2023/6/28.
//

#include "../header/ScoreType.h"

int ScoreType::add(const std::string& subject, int score) {
    this->subjects.push_back(subject);
    this->scores.push_back(score);
    return 0;
}

[[maybe_unused]] int ScoreType::add(const QString &subject, int score) {
    this->subjects.push_back(subject.toStdString());
    this->scores.push_back(score);
    return 0;
}

std::list<int> ScoreType::getScores() {
    return this->scores;
}
