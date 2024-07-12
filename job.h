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
    int GETsalary();
    QString GETjob_name();
    QString GETcompany_name();
    QString GETskill_required();
    QString GETworkPlace_type();
    QString GETlocation();
    QString GETtype();
};

#endif // JOB_H
