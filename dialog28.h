#ifndef DIALOG28_H
#define DIALOG28_H

#include <QDialog>

namespace Ui {
class Dialog28;
}

class Dialog28 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog28(QWidget *parent = nullptr,int s=0);
    ~Dialog28();

private:
    Ui::Dialog28 *ui;
};

#endif // DIALOG28_H
