#ifndef DIALOG9_H
#define DIALOG9_H
#include "dialog10.h"

#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog9;
}

class Dialog9 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog9(QWidget *parent = nullptr,int s=0);
    ~Dialog9();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog9 *ui;
    Dialog10 *dia;
    QLabel* scoreLabel = nullptr;
    int s20=0;
};

#endif // DIALOG9_H
