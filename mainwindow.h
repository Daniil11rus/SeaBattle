#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QImage>
#include <QPainter>
#include <QPoint>
#include <QMouseEvent>
#include <QDebug>
#include <QString>
#include <QTime>
#include <QVBoxLayout>
#include "ImagesClass.h"
#include "ModelClass.h"
#include "ControllerClass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent( QPaintEvent* event );
    void mousePressEvent( QMouseEvent* ev );
    void closeEvent( QCloseEvent* event );

private slots:
    void redraw();
private:
    void setStatus( const QString& status );

    QImage myFieldImage();
    QImage enemyFieldImage();
    QImage getFieldImage( char );

    Ui::MainWindow *ui;
    State state;
    Model* model;
    Controller* controller;
};

#endif // MAINWINDOW_H
