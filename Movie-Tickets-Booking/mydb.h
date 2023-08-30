#ifndef MYDB_H
#define MYDB_H

#include <QDebug>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>
#include <QDebug>
#include <QSqlError>
#include <QSqlQueryModel>

class MyDB
{
private:
    static MyDB *instance;
    void init();
    QSqlDatabase db;

public:
    MyDB();
    static MyDB* getInstance();
    static void ResetInstance();
    QSqlDatabase getDBInstance();
    ~MyDB();
};

#endif // MYDB_H
