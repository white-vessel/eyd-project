#include "login.h"
#include "ui_login.h"
#include "QString"
#include "QMessageBox"
#include "welcome.h"
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
    a = ui->lineEdit_8->text();
    for (int i = 0; i<5 ;i++ )
    {
        if(c[i] != a[i])
        {
            QMessageBox::warning(this,"wrong captcha!","you entered a wrong captcha!","ok");
            break;
        }
    }
}


void LogIn::on_pushButton_3_clicked()
{
    welcome *w=new welcome;
    w->show();
    this->close();
}

