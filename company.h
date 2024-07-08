#ifndef COMPANY_H
#define COMPANY_H

#include <QMainWindow>
#include "QString"
#include "account.h"
#include <vector>
using namespace std;

class Company :public Account
{
    QString company_name;
    QVector <QString> company_jobs;
    QVector <QString> followers;
    QVector <QString> employee;

public:
    Company();
    void create_job();
    QString GETcompany_name();
};

//company jobs-employee-followers VECTOR or dynamic array

#endif // COMPANY_H
