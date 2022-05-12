#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <QMessageBox>
#include "dialog.h"
#include"cours1.h"
#include <QGraphicsTextItem>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QDebug>
MainWindow1::MainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow1)

{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/interface.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);




    this->setPalette(palette);


}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::ChangePushButtonColor(QPushButton *ptrPushButtonToColor, QString newColor){

    newColor = newColor.toLower();

    QString command = "background-color: " + newColor + ";";

    ptrPushButtonToColor->setStyleSheet(command);
}
void MainWindow1::on_pushButton_clicked()
{
    dia = new Dialog(this);
        hide();
        dia ->show();

}


void MainWindow1::on_pushButton_2_clicked()
{
    dia1 = new cours1(this);
        hide();
        dia1 ->show();

}
