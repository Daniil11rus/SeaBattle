#pragma once

#include <QDialog>
#include <QLabel>
#include <QVBoxLayout>

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutDialog( QWidget* parent = nullptr, Qt::WindowFlags f = nullptr );

public slots:
    void on_labelURL_clicked( const QString& url );

protected:
    void paintEvent( QPaintEvent* event );
    QPushButton* okButton;
    QLabel* labelURL;
    QLabel* labelInfo;
    QVBoxLayout* verticalLayout;
};
