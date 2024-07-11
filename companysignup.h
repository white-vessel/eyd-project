#ifndef COMPANYSIGNUP_H
#define COMPANYSIGNUP_H

#include <QMainWindow>

namespace Ui {
class companySignUp;
}

class companySignUp : public QMainWindow
{
    Q_OBJECT

public:
    explicit companySignUp(QWidget *parent = nullptr);
    ~companySignUp();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::companySignUp *ui;
};

#endif // COMPANYSIGNUP_H
