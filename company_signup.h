#ifndef COMPANY_SIGNUP_H
#define COMPANY_SIGNUP_H

#include <QMainWindow>

namespace Ui {
class company_signUp;
}

class company_signUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit company_signUp(QWidget *parent = nullptr);
    ~company_signUp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::company_signUp *ui;
};

#endif // COMPANY_SIGNUP_H
