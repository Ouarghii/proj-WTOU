#ifndef COURS1_H
#define COURS1_H
#include "cours2.h"
#include <QDialog>

namespace Ui {
class cours1;
}

class cours1 : public QDialog
{
    Q_OBJECT

public:
    explicit cours1(QWidget *parent = nullptr);
    ~cours1();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cours1 *ui;
    cours2 *dia;
};

#endif // COURS1_H
