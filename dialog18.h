#ifndef DIALOG18_H
#define DIALOG18_H
#include "dialog19.h"

#include <QDialog>
#include <QLabel>

namespace Ui {
class Dialog18;
}

class Dialog18 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog18(QWidget *parent = nullptr,int s=0);
    ~Dialog18();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Dialog18 *ui;
    Dialog19 *dia;
    QLabel* scoreLabel = nullptr;
    int s29=0;
};

#endif // DIALOG18_H
