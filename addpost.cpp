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

#include "post.h"


QString txt;
addPost::addPost(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::addPost)
{
    ui->setupUi(this);
    this->centralWidget()->setStyleSheet(
             "background-image:url(\"bkg.jpg\"); background-position: center;" );
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

}

