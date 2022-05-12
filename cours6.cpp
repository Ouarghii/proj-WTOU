#include "cours6.h"
#include "ui_cours6.h"

cours6::cours6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours6)
{
    ui->setupUi(this);
    ui->setupUi(this);
    QPixmap pix("C:/Users/21697/Downloads/Projet final/capture5.png");
    ui->label->setPixmap(pix);
}

cours6::~cours6()
{
    delete ui;
}

void cours6::on_pushButton_clicked()
{
    dia = new cours7(this);
     hide();
    dia ->show();
}

