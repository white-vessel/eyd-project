#include "confirmcompany.h"
#include "ui_confirmcompany.h"

confirmCompany::confirmCompany(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::confirmCompany)
{
    ui->setupUi(this);
}

confirmCompany::~confirmCompany()
{
    delete ui;
}
