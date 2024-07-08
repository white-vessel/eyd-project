#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QMainWindow>
#include "QString"
#include <vector>
#include <iostream>

class Account
{
    QString account_id;
    int phone_number;
    QString email;
    //QVector <post> posts
    QVector <QString> following;
    QVector <QString> connection;


public:
    QString GETaccount_id();
    int GETphone_number();
    QString GETemail();
    Account();
};

#endif // ACCOUNT_H
