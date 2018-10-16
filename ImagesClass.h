#pragma once

#ifndef IMAGESCLASS_H
#define IMAGESCLASS_H

#include <QMap>
#include <QImage>
#include <QString>

class Images
{
public:
    Images();
    void load();
    QImage& get( const QString& imgName );
    bool isLoaded();

private:
    QMap<QString, QImage> images;
    bool isLoaded_;
};

extern Images images;

#endif // IMAGESCLASS_H
