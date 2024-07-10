#include "addpost.h"
#include "ui_addpost.h"
#include "my_network_admin.h"
#include "my_networks_karbar.h"
#include "messeging.h"
#include "me.h"
#include "jobs_admin.h"
#include "jobs_karbar.h"
#include "home.h"
#include "QString"
#include "QFileDialog"
#include "QLabel"
#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//

#include "post.h"
#include "content.h"
Account acc;
post posts;

QString txt;
addPost::addPost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addPost)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
             "background-image:url(\"bkg.jpg\"); background-position: center;" );
    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();
}

addPost::~addPost()
{
    delete ui;
}

void addPost::SetTexts()
{

}


/*txt = ui->lineEdit->text();
ui->textEdit->setText("txt");*/




void addPost::on_addImagePsh_clicked()
{
    QString path = ui->filepth->text();
    QPixmap image(path);
    ui->label->setPixmap(image);

    posts.SETimage_path(path);
    //QSqlQuery q;
    //QString cuser;
    //cuser=acc.GETCURRENTaccount_id();
    //q.exec("INSERT INTO post(username,file_path)VALUES('"+cuser+"','"+path+"')");
   // q.exec("INSERT INTO post(file_path)VALUES('"+path+"')WHERE post.username='"+cuser+"'");
}


void addPost::on_pushButton_2_clicked()
{
        QSqlQuery q;
        QString cap = ui->lineEdit->text();
        QString path = ui->filepth->text();
        QString cuser=acc.GETCURRENTaccount_id();
        //posts.SETimage_path(path);
        //posts.SETcaption(cap);
        //q.exec("INSERT INTO post(time1)VALUES(date('now'))WHERE file_path='"+path+"' AND caption='"+cap+"'"  );

        q.exec("INSERT INTO post(time1,caption,file_path,username)VALUES (time('now'),'"+cap+"','"+path+"','"+cuser+"')");
}


void addPost::on_pushButton_clicked()
{
    /*QString cap;
    cap = ui->lineEdit->text();
    posts.SETcaption(cap);*/
}

