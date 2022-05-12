#ifndef DIALOG14_H
#define DIALOG14_H

#include <QDialog>
#include "dialog15.h"
#include <QLabel>

namespace Ui {
class Dialog14;
}

class Dialog14 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog14(QWidget *parent = nullptr,int s=0);
    ~Dialog14();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog14 *ui;
    Dialog15 *dia;
    QLabel* scoreLabel = nullptr;
    int s25=0;
};

#endif // DIALOG14_H
