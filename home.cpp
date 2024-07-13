#include "home.h"
#include "ui_home.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "addpost.h"
#include "account.h"
#include "person.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//
#include "QLabel"
#include "QLineEdit"
#include "QVBoxLayout"
#include "QPixmap"
#include "QPushButton"
#include "mecompany.h"
Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

    /*QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();*/

    QSqlQuery q;
    QSqlQuery s;
    q.exec("SELECT caption FROM post");
    s.exec("SELECT file_path FROM post");
    QVBoxLayout *lay = new QVBoxLayout(this);
    QString pth;
    QString fn;
    while(q.next()){
        /*QString path = "D:\javad\photo_2024-07-07_20-53-15.jpg";
        QPixmap image(path);
        QLabel *aks = new QLabel("hhhhhhhhhh");
        aks->setPixmap(image);*/

        /*if(q.first())
        {
             fn = q.value("caption").toString();
        }*/
        fn = q.value(0).toString();
        pth = s.value(0).toString();
        QPixmap image(pth);
        QLabel *aks = new QLabel();
        aks->setPixmap(image);
        QLineEdit *payam = new QLineEdit(fn);
        payam->setEnabled(false);
        QPushButton *shw = new QPushButton("show post");
        //shw->clicked(true)ui->label->setPixmap(image);
        //lay->addWidget(aks);
        lay->addWidget(payam);
        lay->addWidget(shw);

    }
    //ui->scrollContents->setLayout(lay);
}

Home::~Home()
{
    delete ui;
}

void Home::on_homePushButton_clicked()
{
    Home *w = new Home;
    w->show();
    this->close();
}


void Home::on_pushButton_2_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco == "0"){
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


void Home::on_pushButton_3_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco == "0"){
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


void Home::on_pushButton_4_clicked()
{
    Messeging *w3 = new Messeging;
    w3->show();
    this->close();
}


void Home::on_pushButton_5_clicked()
{
    Account a;
    QString isco =a.GETCURRENTis_company();
    if(isco=="0"){
        Me *w4 = new Me;
        w4->show();
        this->close();
    }
    if(isco=="1"){
        MeCompany *wr = new MeCompany;
        wr->show();
        this->close();
    }

    //inja bayad compony va carbar fargh kone:

}


void Home::on_pushButton_6_clicked()
{
    addPost *ww = new addPost;
    ww->show();
}


void Home::on_pushButton_7_clicked()
{


    QSqlQuery q;
    q.exec("SELECT time1,caption,username FROM post ORDER BY time1 DESC");
    QSqlQueryModel *qm = new QSqlQueryModel;
    qm->setQuery(q);
    ui->tableView->setModel(qm);
}


void Home::on_pushButton_clicked()
{
    QString srch= ui->lineEdit->text();
    QSqlQuery q;

    q.exec("SELECT searched FROM search_user");

    if(q.first()){
        q.exec("DELETE FROM search_user ");
        q.exec("INSERT INTO search_user(searched)VALUES('"+srch+"')");
        q.finish();
    }
    else{
        q.exec("INSERT INTO search_user(searched)VALUES('"+srch+"')");
        q.finish();
    }

    //0000000

    q.exec("SELECT searched FROM search_user");
    if(q.first()){
        QString search=q.value("searched").toString();

    }
    //00000

}

