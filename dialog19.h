#ifndef DIALOG19_H
#define DIALOG19_H
#include "dialog20.h"

#include <QDialog>

namespace Ui {
class Dialog19;
}

class Dialog19 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog19(QWidget *parent = nullptr,int s=0);
    ~Dialog19();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog19 *ui;
    Dialog20 *dia;
    QLabel* scoreLabel = nullptr;
    int s30=0;
};

#endif // DIALOG19_H
