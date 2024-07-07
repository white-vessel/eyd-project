#ifndef COMPANY_H
#define COMPANY_H

#include <QMainWindow>
#include "QString"
#include "account.h"

class Company :public Account
{
    QString company_name;

public:
    Company();
    void create_job();
};

//company jobs-employee-followers VECTOR or dynamic array

#endif // COMPANY_H
