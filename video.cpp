#include "video.h"
#include "ui_video.h"
#include <QMediaPlayer>
#include <QVideoWidget>
 #include<QDebug>
Video::Video(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);


}

Video::~Video()
{
    delete ui;
}
