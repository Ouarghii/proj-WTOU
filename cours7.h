#ifndef COURS7_H
#define COURS7_H


#include <QDialog>

namespace Ui {
class cours7;
}

class cours7 : public QDialog
{
    Q_OBJECT

public:
    explicit cours7(QWidget *parent = nullptr);
    ~cours7();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cours7 *ui;


};

#endif // COURS7_H
