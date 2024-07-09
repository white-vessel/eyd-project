#ifndef COMPANYHOME_H
#define COMPANYHOME_H

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
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::companySignUp *ui;
};

#endif // COMPANYHOME_H
