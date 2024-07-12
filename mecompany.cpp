#include "mecompany.h"
#include "ui_mecompany.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "home.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "me.h"
#include "account.h"
#include "person.h"
#include "job.h"
person asl;
Account naAsl;
Job ads;
MeCompany::MeCompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MeCompany)
{
    ui->setupUi(this);
}

MeCompany::~MeCompany()
{
    delete ui;
    QSqlQuery q;
    QString Uname = naAsl.GETCURRENTaccount_id();
    //q.exec("SELECT username FROM current_user");
    //QString Uname = q.value("username").toString();
    ui->lineEdit_2->setText(ads.GETcompany_name(Uname));
    ui->lineEdit_3->setText(asl.GETemail(Uname));
    ui->lineEdit_5->setText(asl.GETskills(Uname));
}

void MeCompany::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void MeCompany::on_pushButton_2_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        My_Networks_karbar *w1 = new My_Networks_karbar;
        w1->show();
        this->close();
    }
    if(isco=="1"){
        My_network_Admin *w6 = new My_network_Admin;
        w6->show();
        this->close();
    }

}


void MeCompany::on_pushButton_3_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        Jobs_karbar *w5 = new Jobs_karbar;
        w5->show();
        this->close();
    }
    if(isco=="1"){
        Jobs_Admin *w2 = new Jobs_Admin;
        w2->show();
        this->close();
    }

}


void MeCompany::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void MeCompany::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
    //inja bayad compony va carbar fargh kone:
    MeCompany *wr = new MeCompany;
    wr->show();
    this->close();
}


void MeCompany::on_pushButton_6_clicked()
{
    QString parametr;
    parametr = ui->lineEdit_2->text();
    ads.SETcompany_name(parametr);
    parametr = ui->lineEdit_3->text();
    asl.SETemail(parametr);
    parametr = ui->lineEdit_5->text();
    asl.SETskills(parametr);

    QString Uname = naAsl.GETCURRENTaccount_id();
    ui->lineEdit_2->setText(ads.GETcompany_name(Uname));
    ui->lineEdit_3->setText(asl.GETemail(Uname));
    ui->lineEdit_5->setText(asl.GETskills(Uname));
}

