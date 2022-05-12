#ifndef DIALOG4_H
#define DIALOG4_H
#include "dialog5.h"
#include <QLabel>

#include <QDialog>
#include "score.h"
namespace Ui {
class Dialog4;
}

class Dialog4 : public QDialog{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = nullptr,int s=0);
    ~Dialog4();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();


private:
    Ui::Dialog4 *ui;
    Dialog5* dia;
    QLabel* scoreLabel = nullptr;
    int s15=0;

};

#endif // DIALOG4_H
