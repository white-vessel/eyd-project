#ifndef PERSON_H
#define PERSON_H

#include <QMainWindow>
#include "QString"
#include "account.h"

class person : public Account
{
     QString first_name;
     QString last_name;
     QString skills;

public:
    person();
    void take_job(QString job);
};

#endif // PERSON_H
