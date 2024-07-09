#ifndef COMMENTUI_H
#define COMMENTUI_H

#include <QMainWindow>

namespace Ui {
class comments;
}

class comments : public QMainWindow
{
    Q_OBJECT

public:
    explicit comments(QWidget *parent = nullptr);
    ~comments();

private:
    Ui::comments *ui;
};

#endif // COMMENTUI_H
