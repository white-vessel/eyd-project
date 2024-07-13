#ifndef VIEWPROFILE_H
#define VIEWPROFILE_H

#include <QMainWindow>

namespace Ui {
class viewProfile;
}

class viewProfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit viewProfile(QWidget *parent = nullptr);
    ~viewProfile();

private slots:
    void on_homePushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::viewProfile *ui;
};

#endif // VIEWPROFILE_H
