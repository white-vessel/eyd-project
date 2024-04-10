#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class LogIn;
}

class LogIn : public QMainWindow
{
    Q_OBJECT

public:
    explicit LogIn(QWidget *parent = nullptr);
    ~LogIn();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::LogIn *ui;
};

#endif // LOGIN_H
