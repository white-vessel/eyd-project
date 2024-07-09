#include "commentui.h"
#include "ui_comments.h"

comments::comments(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::comments)
{
    ui->setupUi(this);
}

comments::~comments()
{
    delete ui;
}
