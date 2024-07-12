#include "jobs_admin.h"
#include "ui_jobs_admin.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_karbar.h"
#include "home.h"
#include "addjob.h"
#include "account.h"
#include "QPushButton"
#include "QLineEdit"
#include "QVBoxLayout"
#include "mecompany.h"
Jobs_Admin::Jobs_Admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Jobs_Admin)
{
    ui->setupUi(this);
    //QVBoxLayout *lay = new QVBoxLayout(this);

}

Jobs_Admin::~Jobs_Admin()
{
    delete ui;
}
void Jobs_Admin::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}
void Jobs_Admin::on_pushButton_2_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco == 0){
    Jobs_karbar *w5 = new Jobs_karbar;
    w5->show();
    this->close();
    }
    else{
    Jobs_Admin *w2 = new Jobs_Admin;
    w2->show();
    this->close();
    }

    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda

}


void Jobs_Admin::on_pushButton_3_clicked()
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

    //اinja bayad if bezarim baraye karbar joda vared shavad va baraye admin joda

}


void Jobs_Admin::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Jobs_Admin::on_pushButton_5_clicked()
{
    Me *w4 = new Me;
    w4->show();
    this->close();
    //inja bayad compony va carbar fargh kone:
    MeCompany *wr = new MeCompany;
    wr->show();
    this->close();
}


void Jobs_Admin::on_pushButton_6_clicked()
{
    addJob *wwe = new addJob;
    wwe->show();
}

