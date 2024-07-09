#include "signup.h"
#include "ui_signup.h"
#include "QString"
#include "QMessageBox"
#include "welcome.h"
#include "confirmprofile.h"
#include "code.h"
#include "QMessageBox"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"
#include "foruser.h"//یوزرنیم
QString b;
signup::signup(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->lineEdit_7->setEnabled(false);

    QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();


    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            b[i] = 'a'+a;
        }
        if(r==0)
        {
            b[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(b);
}
signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_2_clicked()
{
    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            b[i] = 'a'+a;
        }
        if(r==0)
        {
            b[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(b);

}


void signup::on_pushButton_clicked()
{
    QString Uname;
    int id_count=1;
    Uname=ui->lineEdit->text();
    QSqlQuery q;
    QSqlQuery s;


    QString a;
    a = ui->lineEdit_8->text();
    for (int i = 0; i<5 ;i++ )
    {
        if(b[i] != a[i])
        {
            QMessageBox::warning(this,"wrong captcha!","you entered a wrong captcha!","ok");
            break;
        }
        else
        {
             q.exec("SELECT username FROM user WHERE username='"+Uname+"'");

            if(q.first()){
                QMessageBox::warning(this,"erorr","this username already exist.");
            }
            else {
                q.exec("INSERT INTO user(username)VALUES('"+Uname+"')");//same user fix
                //تابع واسه ساخت ایدی
                while (true) {
                    QString qstring_id = QString::number(id_count);
                    s.exec("SELECT id FROM user WHERE id='"+qstring_id+"'");

                    if(s.first()){
                        id_count=id_count+1;
                    }
                    else {
                        QString qstring_id = QString::number(id_count);
                        q.exec("UPDATE  user SET id = '"+qstring_id+"' WHERE username='"+Uname+"'");
                        break;
                    }
                }
                if(ui->lineEdit->text() =="")
                {
                    QMessageBox::warning(this,"Attention!","you did not fill every parameters!","OK");
                }
                else if(ui->lineEdit_4->text() =="")
                {
                    QMessageBox::warning(this,"Attention!","you did not fill every parameters!","OK");
                }
                else if(ui->lineEdit_6->text() =="")
                {
                    QMessageBox::warning(this,"Attention!","you did not fill every parameters!","OK");
                }
                else if(ui->lineEdit_4->text() !=ui->lineEdit_6->text())
                {
                    QMessageBox::warning(this,"Attention!","confirm your password correctly!","OK");
                }
                else{

                QString pass;
                pass=ui->lineEdit_6->text();
                q.exec("UPDATE  user SET password = '"+pass+"' WHERE username='"+Uname+"'");//password not going to db fix

                code *w2=new code;
                w2->show();
                this->close();
                break;
                }
            }





        }
    }
}


void signup::on_pushButton_3_clicked()
{
    welcome *w=new welcome;
    w->show();
    this->close();

}


void signup::on_comboBox_activated(int index)
{
    QString Uname;
    Uname=ui->lineEdit->text();
    QSqlQuery q;
    switch (index) {
    case '1':
        break;
    case '2':
       q.exec("UPDATE user SET is_company = '1' WHERE username='"+Uname+"'");
        break;
    }
}

