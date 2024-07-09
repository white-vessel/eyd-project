#ifndef ME_H
#define ME_H

#include <QMainWindow>

namespace Ui {
class Me;
}

class Me : public QMainWindow
{
    Q_OBJECT

public:
    explicit Me(QWidget *parent = nullptr);
    ~Me();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Me *ui;
};

#endif // ME_H
