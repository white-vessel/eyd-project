#include "addjob.h"
#include "ui_addjob.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "home.h"
#include "account.h"
#include "QString"
#include "job.h"
Account john;
Job nerw;
QString typ;
addJob::addJob(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addJob)
{
    ui->setupUi(this);
}

addJob::~addJob()
{
    delete ui;
}

void addJob::on_comboBox_2_activated(int index)
{
    switch (index) {
    case 1:
       typ = "full time";
        break;
    case 2:
        typ = "part time";
        break;
    case 3:
        typ = "project work";

    }
}
void addJob::on_pushButton_clicked()
{
    //QString Uname = john.GETCURRENTaccount_id();
    nerw.SETjob_name(ui->lineEdit->text());
    nerw.SETcompany_name(ui->lineEdit_3->text());

    nerw.SETlocation(ui->lineEdit_5->text());
    nerw.SETtype(typ);
}




