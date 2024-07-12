#ifndef CONFIRMCOMPANY_H
#define CONFIRMCOMPANY_H

#include <QMainWindow>

namespace Ui {
class confirmCompany;
}

class confirmCompany : public QMainWindow
{
    Q_OBJECT

public:
    explicit confirmCompany(QWidget *parent = nullptr);
    ~confirmCompany();

private slots:
    void on_pushButton_clicked();

private:
    Ui::confirmCompany *ui;
};

#endif // CONFIRMCOMPANY_H
