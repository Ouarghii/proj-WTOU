#include "cours1.h"
#include "ui_cours1.h"
#include <QPixmap>
#include "cours2.h"
cours1::cours1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours1)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture.png");
    ui->label_pic->setPixmap(pix);
}

cours1::~cours1()
{
    delete ui;
}

void cours1::on_pushButton_clicked()
{
    dia = new cours2(this);
     hide();
    dia ->show();
}
