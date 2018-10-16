#pragma once
#include <QString>
#include <QObject>
#include "FieldClass.h"

enum State
{
    ST_PLACING_SHIPS,
    ST_WAITING_STEP,
    ST_MAKING_STEP
};

class Model: public QObject
{
    Q_OBJECT
public:
    Model();
    ~Model();
    State getState() const;
    void setState( State );
    Cell getMyCell( int x, int y ) const;
    void setMyCell( int x, int y, Cell cell );
    QString getMyField() const;
    Cell getEnemyCell( int x, int y ) const;
    void setEnemyCell( int x, int y, Cell cell );
    QString getEnemyField() const;
    bool checkMyField() const;
    void clearEnemyField();
    void clearMyField();

private:
    int shipNum( int size ) const;
    bool isShip( int size, int x, int y ) const;

private:
    Field* myField, *enemyField;
    State state;
};
