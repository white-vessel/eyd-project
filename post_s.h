#ifndef POST_S_H
#define POST_S_H

#include <QWidget>

namespace Ui {
class post_s;
}

class post_s : public QWidget
{
    Q_OBJECT

public:
    explicit post_s(QWidget *parent = nullptr);
    ~post_s();

private slots:
    void on_pushButton_clicked();

private:
    Ui::post_s *ui;
};

#endif // POST_S_H
