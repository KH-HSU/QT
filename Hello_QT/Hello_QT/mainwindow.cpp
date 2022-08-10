#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap> // Library to show image
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap image("/Users/hsu/Desktop/QT/Hello_QT/one.ppm");
    ui->label->setPixmap(image);
    ui->label_2->setText("Hello QT!");
}

