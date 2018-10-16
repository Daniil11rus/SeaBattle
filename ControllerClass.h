#pragma once
#include <QObject>
#include <QPoint>
#include <QRegExp>
#include <QMessageBox>
#include <QFile>
#include <QRegExp>
#include "ModelClass.h"

class Controller: public QWidget
{
    Q_OBJECT
public:
    Controller( Model* model_ );
    ~Controller();
    void onMousePressed( const QPoint& position, bool setShip = true );
    void onGameStart();
    void onGameQuit();
    void clearFields();
    State getState() const;

signals:
    void stateChanged();

private:
    Model* model;
};
