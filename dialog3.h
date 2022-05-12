#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <dialog4.h>
#include <QLabel>
#include "score.h"
#include"mainwindow2.h"

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = nullptr,int s=0);
    ~Dialog3();
    score *Score;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog3 *ui;
    Dialog4 *dia;
    MainWindow2 *dia1;
    QLabel* scoreLabel = nullptr;
    int s14=0;



};

#endif // DIALOG3_H
