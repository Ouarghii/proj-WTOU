#ifndef COURS6_H
#define COURS6_H

#include <QDialog>
#include "cours7.h"

namespace Ui {
class cours6;
}

class cours6 : public QDialog
{
    Q_OBJECT

public:
    explicit cours6(QWidget *parent = nullptr);
    ~cours6();

private slots:
    void on_pushButton_clicked();

private:
    Ui::cours6 *ui;
    cours7 *dia;
};

#endif // COURS6_H
