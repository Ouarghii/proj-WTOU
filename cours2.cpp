#include "cours2.h"
#include "ui_cours2.h"
#include <QPixmap>
#include "cour3.h"
cours2::cours2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours2)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture1.png");
    ui->label->setPixmap(pix);
}

cours2::~cours2()
{
    delete ui;
}

void cours2::on_pushButton_clicked()
{
    dia = new cour3(this);
     hide();
    dia ->show();
}
