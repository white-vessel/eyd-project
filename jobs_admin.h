#ifndef JOBS_ADMIN_H
#define JOBS_ADMIN_H

#include <QMainWindow>

namespace Ui {
class Jobs_Admin;
}

class Jobs_Admin : public QMainWindow
{
    Q_OBJECT

public:
    explicit Jobs_Admin(QWidget *parent = nullptr);
    ~Jobs_Admin();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

private:
    Ui::Jobs_Admin *ui;
};

#endif // JOBS_ADMIN_H
