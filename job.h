#ifndef JOB_H
#define JOB_H

#include <QMainWindow>
#include "QString"
#include "account.h"

class Job
{
    QString salary;
    QString job_name;
    QString company_name;
    QString skill_required;
    QString workPlace_type;
    QString location;
    QString type;
public:
    Job();
    QString GETsalary(QString);
    QString GETjob_name(QString);
    QString GETcompany_name(QString);
    QString GETskill_required(QString);
    QString GETworkPlace_type(QString);
    QString GETlocation(QString);
    QString GETtype(QString);

    void SETsalary(QString);
    void SETjob_name(QString);
    void SETcompany_name(QString);
    void SETskill_required(QString);
    void SETworkPlace_type(QString);
    void SETlocation(QString);
    void SETtype(QString);
};

#endif // JOB_H
