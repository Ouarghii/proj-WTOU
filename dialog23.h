#ifndef DIALOG23_H
#define DIALOG23_H

#include "dialog24.h"
#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog23;
}

class Dialog23 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog23(QWidget *parent = nullptr,int s=0);
    ~Dialog23();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog23 *ui;
    Dialog24 *dia;
    QLabel* scoreLabel = nullptr;
    int s34=0;
};

#endif // DIALOG23_H
