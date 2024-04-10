#ifndef CODE_H
#define CODE_H

#include <QMainWindow>

namespace Ui {
class code;
}

class code : public QMainWindow
{
    Q_OBJECT

public:
    explicit code(QWidget *parent = nullptr);
    ~code();
    int verif(int veri);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::code *ui;
};

#endif // CODE_H
