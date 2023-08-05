//
// Created by Stark on 2023/6/28.
//

#include "../header/Slots.h"
#include "../../DataBase/Manage/header/Backup.h"
#include "../../DataBase/Manage/header/Enter.h"
#include "../../DataBase/Manage/header/Modify.h"
#include <list>
#include <string>
#include <iostream>
#include <qdebug.h>



/* 备份功能，不需要参数 */
void Slots::backupSlots() {
    if (!(this->query.empty()))
        this->query.clear();
    this->query.emplace_back(
            R"(select * from( select id, name, DiscreteMathematics from student_information union select 'id','name', 'DiscreteMathematics') m order by m.id desc into outfile 'F:\\MySQL\\io\\in.csv' fields terminated by ',' optionally enclosed by '\"' escaped by '\"' lines terminated by '\r\n';)");
    Backup backup = Backup("localhost", "root", "password", "students", 0, nullptr, 0, query);
    backup.backup();
}

/* 恢复功能，不需要参数 */
void Slots::restoreSlots() {
    if (!(this->query.empty()))
        this->query.clear();
    this->query.emplace_back(
            R"(select * from( select id, name, 离散数学 from student_information union select '序号','姓名', '离散数学') m order by m.id desc into outfile 'F:\\MySQL\\io\\in.csv' fields terminated by ',' optionally enclosed by '\"' escaped by '\"' lines terminated by '\r\n';)");
    Backup backup = Backup("localhost", "root", "password", "students", 0, nullptr, 0, query);
    backup.restore();
}

/* 添加考核方式功能，需要参数
 * name：考核名称；
 */
void Slots::direaddSlots(const QString& name) {
    if (!(this->query.empty()))
        this->query.clear();
    std::string tmpquery = "alter table student_information add ";
    tmpquery.append(name.toStdString());
    tmpquery.append(" int;");
    this->query.emplace_back(tmpquery);
    Enter enter = Enter("localhost", "root", "password", "students", 0, nullptr, 0, query);
    enter.direadd();
}

/* 删除考核方式功能，需要参数
 * name：考核名称；
 */
void Slots::direpopSlots(const QString& name) {
    /* name: 考核名称 */
    if (!(this->query.empty()))
        this->query.clear();
    std::string tmpquery = "alter table student_information drop ";
    tmpquery.append(name.toStdString());
    tmpquery.append(" ;");
    this->query.emplace_back(tmpquery);
    Enter enter = Enter("localhost", "root", "password", "students", 0, nullptr, 0, query);
    enter.direpop();
}

/* 添加学生信息功能，需要参数
 * name：学生名称；
 * id：学生学号；
 * scores：学生成绩，字典类型或数组类型；
 */
void Slots::transaddSlots(const QString& name, const QString& id, ScoreType scores) {
    std::string tmpquery = "insert into student_information values(";
    tmpquery.append(id.toStdString());
    tmpquery.append(", \"");
    tmpquery.append(name.toStdString());
    tmpquery.append("\", ");
    std::list<int> score = scores.getScores();

    auto iter = score.begin();
    for (auto i = 0; i < score.size() - 1; ++i) {
        tmpquery.append(std::to_string(*iter));
        tmpquery.append(", ");
        iter++;
    }
    tmpquery.append(std::to_string(*iter));
    tmpquery.append(");");

    std::cout << tmpquery << std::endl;

    if (!(this->query.empty()))
        this->query.clear();

    this->query.emplace_back(tmpquery);
    Enter enter = Enter("localhost", "root", "password", "students", 0, nullptr, 0, query);
    enter.transadd();
}


/* 删除学生信息功能，需要参数
 * content：参数内容；
 * type：参数类型：姓名(name)/学号(id)；
 */
void Slots::transpopSlots(const QString& content, const QString& type) {
    std::string tmpquery = "delete from student_information where ";
    tmpquery.append(type.toStdString());
    tmpquery.append(" = \"");
    tmpquery.append(content.toStdString());
    tmpquery.append("\";");

    std::cout << tmpquery << std::endl;

    if (!(this->query.empty()))
        this->query.clear();

    query.emplace_back(tmpquery);
    Enter enter = Enter("localhost", "root", "password", "students", 0, nullptr, 0, query);
    enter.transpop();
}

/* 修改学生信息功能
 * item：修改的信息
 */
void Slots::modifyFormSlots(const QString& id, QTableWidgetItem *item) {
    /* 可以获取修改的数据的位置
     * qDebug() << "column:" << item->column();
     * qDebug() << "row:" << item->row();
     */
//    query.emplace_back(R"(update student_information set name="史家鸣" where id = 1;)");
    if (!(this->query.empty()))
        this->query.clear();
    std::string tmpquery = "update student_information set ";
    // 获取列表信息
    Handle handle = Handle();
//    std::cout << handle.fieldname[item->column()].name << std::endl;

    /* 更改信息的具体位置：
     * id是item->row() + 1
     * field是handle.fieldname[item->column()].name
     */
    tmpquery.append(handle.fieldname[item->column()].name);
    tmpquery.append(" = \"");
    tmpquery.append(item->text().toStdString());
    tmpquery.append("\" where id = ");
    tmpquery.append(id.toStdString());
    query.emplace_back(tmpquery);
    std::cout << tmpquery << std::endl;
    Modify modify = Modify("localhost", "root", "password", "students", 0, nullptr, 0, query);
    modify.ModifyForm();
}

/* 排序功能，需要参数
 * field：依据字段；
 * order：排序顺序：正序(1)/倒序(0)
 * handle：用来接收数据
 */
void Slots::sortSlots(const QString& field, int order, Handle * handle) {
    std::string tmpquery = "select * from student_information order by ";
    tmpquery.append(field.toStdString());

    if (order) tmpquery.append(" ;");       // 正序
    else tmpquery.append(" desc;");         // 倒序

    if (!(this->query.empty()))
        this->query.clear();

    this->query.emplace_back(tmpquery);


    handle->setQuery(query);
    handle->sort();
}

/* 筛选功能，需要参数
 * field：筛选字段；
 * value：筛选字段的值；
 * handle：用来接收数据；
 */
void Slots::screenSlots(const QString& field, const QString& value, Handle * handle) {
    std::string tmpquery = "select * from student_information where ";
    tmpquery.append(field.toStdString());
    tmpquery.append(" = ");
    if (field.toStdString() == "name") {
        tmpquery.append("\"");
        tmpquery.append(value.toStdString());
        tmpquery.append("\"");
    } else
        tmpquery.append(value.toStdString());
    tmpquery.append(" order by id;");

    if (!(this->query.empty()))
        this->query.clear();
    this->query.emplace_back(tmpquery);

    handle->setQuery(query);
    handle->screen();
}

void Slots::calculateSlots(const QString &field, Calculate& calculate) {
    std::string tmpquery = "select avg(";
    tmpquery.append(field.toStdString());
    tmpquery.append(") from student_information;");

    if (!(this->query.empty()))
        this->query.clear();

    this->query.emplace_back(tmpquery);

//    calculate = Calculate("localhost", "root", "password", "students", 0, nullptr, 0, this->query);
    calculate.setQuery(query);
    calculate.calcavg();
}




