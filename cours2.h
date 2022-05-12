#ifndef COURS2_H
#define COURS2_H
#include "cour3.h"
#include <QDialog>

namespace Ui {
class cours2;
}

class cours2 : public QDialog
{
    Q_OBJECT

public:
    explicit cours2(QWidget *parent = nullptr);
    ~cours2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cours2 *ui;
    cour3 *dia;
};

#endif // COURS2_H
