#ifndef COMPANYCONFIRMPROFILE_H
#define COMPANYCONFIRMPROFILE_H

#include <QMainWindow>

namespace Ui {
class companyConfirmProfile;
}

class companyConfirmProfile : public QMainWindow
{
    Q_OBJECT

public:
    explicit companyConfirmProfile(QWidget *parent = nullptr);
    ~companyConfirmProfile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::companyConfirmProfile *ui;
};

#endif // COMPANYCONFIRMPROFILE_H
