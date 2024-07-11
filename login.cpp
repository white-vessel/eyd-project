#include "login.h"
#include "ui_login.h"
#include "QString"
#include "QMessageBox"
#include "welcome.h"
#include "home.h"

#include <QsqlDatabase>//دیتابیس
#include "QsqlDriver"
#include "QsqlQuery"
#include "QsqlQueryModel"

#include "account.h"
#include "person.h"

using namespace std;

QString c;
LogIn::LogIn(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
    ui->lineEdit_7->setEnabled(false);
    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            c[i] = 'a'+a;
        }
        if(r==0)
        {
            c[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(c);

    /*QSqlDatabase database;//دیتابیس
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d:\\appdb.db");
    database.open();*/

}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_pushButton_2_clicked()
{
    int a;
    for(int i = 0; i<5; i++ )
    {
        int r = rand()%2;
        a = rand()%26;
        if(r ==1)
        {
            c[i] = 'a'+a;
        }
        if(r==0)
        {
            c[i]= 'A'+a;
        }
    }
    ui->lineEdit_7->setText(c);
}


void LogIn::on_pushButton_clicked()
{
    QString a;
    bool capcha = false;
    a = ui->lineEdit_8->text();
    for (int i = 0; i<5 ;i++ )
    {
        if(c[i] != a[i])
        {
            QMessageBox::warning(this,"wrong captcha!","you entered a wrong captcha!","ok");
            capcha = true;
            break;
        }
    }
//Inja bayad username password check beshe baad vared beshe:


    QString Uname;
    QString Upass;

    Uname=ui->lineEdit->text();
    Upass=ui->lineEdit_4->text();
    QSqlQuery q;
    QSqlQuery s;

    q.exec("SELECT username FROM user WHERE username='"+Uname+"'");

   if(q.first()){
       s.exec("SELECT password FROM user WHERE password='"+Upass+"'");
       if(s.first()){
           if(capcha == false){
           Home *ww = new Home;
           ww->show();
           this->close();
           }
           Account a;
           a.SETCURRENTaccount_id(Uname);
            //q.exec("INSERT INTO current_user(username)VALUES('"+Uname+"')");//ورود به صفحه هوم با انتقال آیدی به دیتابیس

       }
       else{
           QMessageBox::warning(this,"erorr","password is incorrect!");

       }
   }
   else {
        QMessageBox::warning(this,"erorr","username not found!");
   }





}



void LogIn::on_pushButton_3_clicked()
{
    welcome *w=new welcome;
    w->show();
    this->close();
}

