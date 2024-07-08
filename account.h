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
    QString password;
    QString email;
    //QVector <post> posts
    QVector <QString> following;
    QVector <QString> connection;


public:
    QString GETaccount_id();
    int GETphone_number();
    QString GETemail();

    void SETaccount_id(QString);
    void SETphone_number(int);
    void SETemail(QString);
    void SETpassword(QString);

    Account();
};

#endif // ACCOUNT_H
