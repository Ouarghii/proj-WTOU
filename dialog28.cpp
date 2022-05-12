#include "dialog28.h"
#include "ui_dialog28.h"
#include <QGraphicsTextItem>

Dialog28::Dialog28(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog28)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/gameover.png");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);




    this->setPalette(palette);

}

Dialog28::~Dialog28()
{
    delete ui;
}
