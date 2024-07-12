#include "job.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "QString"



Job::Job()
{

}
QString Job::GETjob_name(QString id){
    QSqlQuery q;
    QString re;
    q.exec("SELECT job_title FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("job_title").toString();
    }
    else{
        return "nojob_title";
    }
}
QString Job::GETcompany_name(QString id){
    QSqlQuery q;
    QString re;
    q.exec("SELECT company FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("company").toString();
    }
    else{
        return "nocompany_name";
    }
}
QString Job::GETskill_required(QString id){
    QSqlQuery q;
    QString re;
    q.exec("SELECT skill_required FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("skill_required").toString();
    }
    else{
        return "noskill_required";
    }
}
QString Job::GETworkPlace_type(QString id){
    QSqlQuery q;
    QString re;
    q.exec("SELECT workplace_type FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("workplace_type").toString();
    }
    else{
        return "noworkplace_type";
    }
}
QString Job::GETlocation(QString id){
    QSqlQuery q;
    QString re;
    q.exec("SELECT job_location FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("job_location").toString();
    }
    else{
        return "nojob_location";
    }
}
QString Job::GETtype(QString id ){
    QSqlQuery q;
    QString re;
    q.exec("SELECT job_type FROM jobs WHERE username='"+id+"'");
    if(q.first()){
        return re =q.value("job_type").toString();
    }
    else{
        return "nojob_type";
    }
}

void Job::SETsalary(QString s){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    salary=s;
    QSqlQuery q;
    q.exec("UPDATE jobs SET salary='"+s+"' WHERE username='"+cuser+"'");
}
void Job::SETjob_name(QString title){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    job_name=title;
    QSqlQuery q;

    //id maker for job
    QSqlQuery s;
    int id_count=1;


    while (true) {
        QString qstring_id = QString::number(id_count);
        s.exec("SELECT number FROM jobs WHERE number='"+qstring_id+"'");
        if(s.first()){
            id_count=id_count+1;
        }
        else {
            break;
        }
    }
    QString qstring_id = QString::number(id_count);
    //end of id maker

    q.exec("INSERT INTO jobs(username,job_title,number)VALUES('"+cuser+"','"+title+"','"+qstring_id+"')");

}

void Job::SETcompany_name(QString con){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    company_name=con;
    QSqlQuery q;
    q.exec("UPDATE jobs SET company='"+con+"' WHERE username='"+cuser+"'");
}
void Job::SETskill_required(QString skl){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    skill_required=skl;
    QSqlQuery q;
    q.exec("UPDATE jobs SET skill_required='"+skl+"' WHERE username='"+cuser+"'");
}
void Job::SETworkPlace_type(QString wpt){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    workPlace_type=wpt;
    QSqlQuery q;
    q.exec("UPDATE jobs SET workplace_type='"+wpt+"' WHERE username='"+cuser+"'");
}
void Job::SETlocation(QString loc){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    location=loc;
    QSqlQuery q;
    q.exec("UPDATE jobs SET job_location='"+loc+"' WHERE username='"+cuser+"'");
}
void Job::SETtype(QString ty){
    Account a;
    QString cuser = a.GETCURRENTaccount_id();
    type=ty;
    QSqlQuery q;
    q.exec("UPDATE jobs SET job_type='"+ty+"' WHERE username='"+cuser+"'");
}
