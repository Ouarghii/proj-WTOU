#include "dialog3.h"
#include "ui_dialog3.h"
#include "dialog4.h"
#include <QMessageBox>
#include "score.h"
#include<QVBoxLayout>
#include "dialog.h"
#include "mainwindow2.h"

Dialog3::Dialog3(QWidget *parent,int s) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    QPixmap bkgnd("C:/Users/21697/Downloads/Projet final/R.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
    QFont font2 = ui->label->font();
    ui->label->setFont(font2);
    ui->label->setStyleSheet("color:#FFFFFF;");
    QVBoxLayout* layout = new QVBoxLayout();
    QHBoxLayout* headLayout = new QHBoxLayout();

    QLabel* nameLabel = new QLabel(this);
    scoreLabel = new QLabel(this);
    QFont font = nameLabel->font();
    font.setPointSize(25);
    nameLabel->setFont(font);
    scoreLabel->setFont(font);
    nameLabel->setText("Score : ");
    scoreLabel->setText(QString::number(s));
    scoreLabel->setStyleSheet("color:#FFFFFF;");
    nameLabel->setStyleSheet("color:#FFFFFF;");
    headLayout->addWidget(nameLabel, 0, Qt::AlignmentFlag::AlignTop);
    headLayout->addWidget(scoreLabel, 0, Qt::AlignmentFlag::AlignTop);
    headLayout->addWidget(scoreLabel, 70, Qt::AlignmentFlag::AlignRight);
    layout->addLayout(headLayout);
    QFrame* hline = new QFrame();
    hline->setFrameShape(QFrame::HLine);
    hline->setFrameShadow(QFrame::Sunken);
    layout->addWidget(hline);
    setLayout(layout);
    s14=s;
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    if(s14 < 75){
        dia1 = new MainWindow2(this);
            hide();
            dia1 ->show();
       }

    else {
        dia=new Dialog4(this, s14);
        hide();
        dia->show();
    }


}



void Dialog3::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    if(s14 < 75){
        dia1 = new MainWindow2(this);
            hide();
            dia1 ->show();
       }

    else {
        dia=new Dialog4(this, s14);
        hide();
        dia->show();
    }


}


void Dialog3::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"answer","wrong answer");
    if(s14 < 75){
        dia1 = new MainWindow2(this);
            hide();
            dia1 ->show();
       }
    else {
        dia=new Dialog4(this, s14);
        hide();
        dia->show();
    }


}


void Dialog3::on_pushButton_4_clicked()
{
    QMessageBox::information(this,"answer","correct answer");
    s14+=25;
    if(s14<75){
        dia1 = new MainWindow2(this);
            hide();
            dia1 ->show();
       }
    else {
        dia=new Dialog4(this, s14);
        hide();
        dia->show();
    }




}


