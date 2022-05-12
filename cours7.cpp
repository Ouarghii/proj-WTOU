#include "cours7.h"
#include "ui_cours7.h"


cours7::cours7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cours7)
{
    ui->setupUi(this);
}

cours7::~cours7()
{
    delete ui;
}

void cours7::on_pushButton_clicked()
{
}

