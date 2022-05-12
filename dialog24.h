#ifndef DIALOG24_H
#define DIALOG24_H
#include<QLabel>

#include "dialog25.h"
#include <QDialog>

namespace Ui {
class Dialog24;
}

class Dialog24 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog24(QWidget *parent = nullptr,int s=0);
    ~Dialog24();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Dialog24 *ui;
    Dialog25 *dia;
    QLabel* scoreLabel = nullptr;
    int s35=0;
};

#endif // DIALOG24_H
