#ifndef DIALOG8_H
#define DIALOG8_H
#include "dialog9.h"
#include <QLabel>

#include <QDialog>
#include "score.h"
namespace Ui {
class Dialog8;
}

class Dialog8 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog8(QWidget *parent = nullptr,int s=0);
    ~Dialog8();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog8 *ui;
    Dialog9 *dia;
    QLabel* scoreLabel = nullptr;
    int s19=0;
};

#endif // DIALOG8_H
