#ifndef VIDEO_H
#define VIDEO_H

#include <QDialog>
#include <QMediaPlayer>
#include <QVideoWidget>

namespace Ui {
class Video;
}

class Video : public QDialog
{
    Q_OBJECT

public:
    explicit Video(QWidget *parent = nullptr);
    ~Video();

private:
    Ui::Video *ui;
};

#endif // VIDEO_H
