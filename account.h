#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <QMainWindow>
#include "QString"
#include <vector>
#include <iostream>
using namespace std;

class Account
{
    QString account_id;
    QString phone_number;
    QString password;
    QString email;
    //QVector <post> posts
    QVector <QString> following;
    QVector <QString> connection;


public:
    QString GETaccount_id(QString);
    QString GETphone_number(QString);
    QString GETemail(QString);
    QString GETCURRENTaccount_id();
    QString GETis_company(QString);
    QString GETCURRENTis_company();

    void SETCURRENTaccount_id(QString);
    void SETaccount_id(QString);
    void SETphone_number(QString);
    void SETemail(QString);
    void SETpassword(QString);
    void SETis_company(QString);

    Account();
};

#endif // ACCOUNT_H
