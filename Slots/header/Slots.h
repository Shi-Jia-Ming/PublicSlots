//
// Created by Stark on 2023/6/28.
//
// 编写Qt程序与数据库链接需要的各种接口函数
#ifndef PUBLICSLOTS_MANAGE_H
#define PUBLICSLOTS_MANAGE_H

#include <QTableWidgetItem>
#include <QObject>
#include <string>
#include <list>
#include "../../Tools/header/ScoreType.h"
#include "../../DataBase/Show/header/Handle.h"
#include "../../DataBase/Show/header/Calculate.h"

class Slots : public QObject {
public:

    std::list<std::string> query;

public slots:
    /* 备份功能，不需要参数 */
    void backupSlots();

    /* 恢复功能，不需要参数 */
    void restoreSlots();

    /* 添加考核方式功能，需要参数
     * 参数1：考核名称；
     */
    void direaddSlots(const QString& name);

    /* 删除考核方式功能，需要参数
     * 参数1：考核名称；
     */
     void direpopSlots(const QString& name);

     /* 添加学生信息功能，需要参数
      * 参数1：学生名称
      * 参数2：学生学号；
      * 参数3：学生成绩，字典类型或数组类型；
      */
     void transaddSlots(const QString& name, const QString& id, ScoreType scores);

     /* 删除学生信息功能，需要参数
      * 参数1：参数内容；
      * 参数2：参数类型：姓名/学号；
      */
     void transpopSlots(const QString& content, const QString& type);

     /* 修改学生信息功能 */
     void modifyFormSlots(const QString& id, QTableWidgetItem * item);

     /* 排序功能，需要参数
      * 参数1：依据字段；
      * 参数2：排序顺序：正序/倒序
      * 参数3：数据类，用来接收数据
      */
     void sortSlots(const QString& field, int order, Handle * handle);

     /* 筛选功能，需要参数
      * 参数1：筛选字段；
      * 参数2：筛选字段的值；
      */
     void screenSlots(const QString& field, const QString& value, Handle * handle);

     /* 计算功能，需要参数
      * 参数1：计算的字段
      * 参数2：数据类，用来接收数据
      */
     void calculateSlots(const QString& field, Calculate& calculate);
};

#endif //PUBLICSLOTS_MANAGE_H
