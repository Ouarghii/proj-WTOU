#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <QDialog>
#include <iostream>
#include <QDesktopWidget>
#include "dialog3.h"
#include "dialog4.h"

//#include <QTimer>
using namespace std;
MainWindow2::MainWindow2(QWidget *parent) ://constructor de la UI
    QDialog(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);









       ;


    buttonPos={     {  { 1 },{ 2 },{ 3 }  },
                    {  { 4 },{ 5 },{ 6 }  },
                    {  { 7 },{ 8 },{ 0 }  }   };

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(tfunct()));
    t=0;
    imagS=1;


    imagMAX=7;
    QPixmap pix(":/imag/1.jpg");
    ui->label_2->setPixmap(pix.scaled(ui->label_2->width(),ui->label_2->height(),Qt::KeepAspectRatio));

    ui->panel_final->setVisible(false);
    ui->fin_partida->setVisible(false);

}


MainWindow2::~MainWindow2()//destructor de la UI
{
    delete ui;
}

void MainWindow2::setpos(vector<vector<int>> posF){
    int i=0,j=0;


    vector<vector<vector<int>>> posV={  {  { {100,100} },{ {300,100} },{ {500,100} }  },
                                        {  { {100,300} },{ {300,300} },{ {500,300} }  },
                                        {  { {100,500} },{ {300,500} },{ {500,500} }  }   };

    findElement(posF,1,&i,&j);
    ui->p1->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,2,&i,&j);
    ui->p2->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,3,&i,&j);
    ui->p3->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,4,&i,&j);
    ui->p4->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,5,&i,&j);
    ui->p5->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,6,&i,&j);
    ui->p6->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,7,&i,&j);
    ui->p7->setGeometry(posV[i][j][0],posV[i][j][1],200,200);

    i=0;j=0;
    findElement(posF,8,&i,&j);
    ui->p8->setGeometry(posV[i][j][0],posV[i][j][1],200,200);
}


void MainWindow2::setimag(int numI){

    QString path1=":/imag/";
    path1=path1+QString::number(numI);
    QString path2="_1.jpg";
    QPixmap icono1(path1+path2);
    QIcon ButtonIcon1(icono1);
    ui->p1->setIcon(ButtonIcon1);
    ui->p1->setIconSize(ui->p1->size());

    path2="_2.jpg";
    QPixmap icono2(path1+path2);
    QIcon ButtonIcon2(icono2);
    ui->p2->setIcon(ButtonIcon2);
    ui->p2->setIconSize(ui->p1->size());

    path2="_3.jpg";
    QPixmap icono3(path1+path2);
    QIcon ButtonIcon3(icono3);
    ui->p3->setIcon(ButtonIcon3);
    ui->p3->setIconSize(ui->p1->size());

    path2="_4.jpg";
    QPixmap icono4(path1+path2);
    QIcon ButtonIcon4(icono4);
    ui->p4->setIcon(ButtonIcon4);
    ui->p4->setIconSize(ui->p1->size());

    path2="_5.jpg";
    QPixmap icono5(path1+path2);
    QIcon ButtonIcon5(icono5);
    ui->p5->setIcon(ButtonIcon5);
    ui->p5->setIconSize(ui->p1->size());

    path2="_6.jpg";
    QPixmap icono6(path1+path2);
    QIcon ButtonIcon6(icono6);
    ui->p6->setIcon(ButtonIcon6);
    ui->p6->setIconSize(ui->p1->size());

    path2="_7.jpg";
    QPixmap icono7(path1+path2);
    QIcon ButtonIcon7(icono7);
    ui->p7->setIcon(ButtonIcon7);
    ui->p7->setIconSize(ui->p1->size());

    path2="_8.jpg";
    QPixmap icono8(path1+path2);
    QIcon ButtonIcon8(icono8);
    ui->p8->setIcon(ButtonIcon8);
    ui->p8->setIconSize(ui->p1->size());
}


void MainWindow2::check(vector<vector<int>> &_buttonPos){

    vector<vector<int>> buttonPosRef={      {  { 1 },{ 2 },{ 3 }  },
                                            {  { 4 },{ 5 },{ 6 }  },
                                            {  { 7 },{ 8 },{ 0 }  }   };
    if(_buttonPos==buttonPosRef){
        ui->panel_final->setVisible(true);
        ui->fin_partida->setVisible(true);
        timer->stop();
        QString tex1="Bravo \n\n  done in: ";
        QString tex2=QString::number(t);
        QString tex3=" seconds";

        ui->panel_final->setText(tex1+tex2+tex3);

    }

}


void MainWindow2::on_p1_clicked()
{

    int buttIdent = 1;

    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);

}

void MainWindow2::on_p2_clicked()
{
    int buttIdent = 2;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p3_clicked()
{
    int buttIdent = 3;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p4_clicked()
{
    int buttIdent = 4;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p5_clicked()
{
    int buttIdent = 5;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p6_clicked()
{
    int buttIdent = 6;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p7_clicked()
{
    int buttIdent = 7;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::on_p8_clicked()
{
    int buttIdent = 8;
    moveB(buttonPos,buttIdent);
    MainWindow2::setpos(buttonPos);
    check(buttonPos);
}

void MainWindow2::tfunct(){

    QString tiempo="TEMPS: ";
    ui->tiempo->setText(tiempo + QString::number(t));

    t++;
}



void MainWindow2::on_start_clicked()
{
    ui->label_2->setVisible(false);
    ui->start->setVisible(false);




    MainWindow2::setimag(imagS);
    mergeM(buttonPos);
    MainWindow2::setpos(buttonPos);
    timer->start(1000);
}

void MainWindow2::on_fin_partida_clicked()
{
    ui->label_2->setVisible(true);

       ui->start->setVisible(true);

        ui->panel_final->setVisible(false);
        ui->fin_partida->setVisible(false);
        t=0;
        dia2 = new Dialog4(this,75);
        hide();
        dia2 ->show();




}
