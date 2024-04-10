#include "welcome.h"
#include <iostream>
#include <QApplication>
#include <QString>
#include "QMessageBox"
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    welcome w;
    w.show();
    return a.exec();
}
