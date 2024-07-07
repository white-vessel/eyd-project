#ifndef JOB_H
#define JOB_H

#include <QMainWindow>
#include "QString"
#include "account.h"

class Job
{
    int salary;
    QString job_name;
    QString company_name;
    QString skill_required;
    QString workPlace_type;
    QString location;
    QString type;
public:
    Job();
};

#endif // JOB_H
