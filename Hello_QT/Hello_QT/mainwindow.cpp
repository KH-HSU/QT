#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QPixmap> // Library to show image
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    int width = 1200;
    int height = 800;
    ui->setupUi(this);
    this->setFixedHeight(height);
    this->setFixedWidth(width);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap image("/Users/hsu/Desktop/QT/Hello_QT/one.ppm");
    ui->label_2->setPixmap(image);
    ui->label->setText("Hello QT!");
}



void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->clear();
    ui->label->clear();
}

