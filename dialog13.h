#ifndef DIALOG13_H
#define DIALOG13_H

#include <QDialog>
#include "dialog14.h"
#include <QLabel>

namespace Ui {
class Dialog13;
}

class Dialog13 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog13(QWidget *parent = nullptr,int s=0);
    ~Dialog13();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog13 *ui;
    Dialog14 *dia;
    QLabel* scoreLabel = nullptr;
    int s24=0;
};

#endif // DIALOG13_H
