#ifndef MainWindow1_H
#define MainWindow1_H
#include <QGraphicsScene>
#include <QMainWindow>
#include <QGraphicsView>
#include "dialog.h"
#include <QMediaPlayer>
#include <QVideoWidget>
#include "cours1.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow1; }
QT_END_NAMESPACE

class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow1(QWidget *parent = nullptr);
    ~MainWindow1();
    void ChangePushButtonColor(QPushButton* ,QString);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow1 *ui;
    Dialog *dia;
    QMediaPlayer *player;
    cours1 * dia1;
};
#endif // MainWindow11_H
