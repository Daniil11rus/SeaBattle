#include "ui_mainwindow.h"
#include "mainwindow.h"

MainWindow::MainWindow( QWidget* parent ):
    QMainWindow( parent ),
    ui( new Ui::MainWindow )
{
    ui->setupUi( this );
    images.load();
    model = new Model;
    controller = new Controller( model );
}
