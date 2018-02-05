#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int random = rand() % 5;
    if (random == 0)
    {
        ui->label->setText("Все будет хорошо!");
    }
    else if (random == 1)
    {
        ui->label->setText("Будет новый комп!");
    }
    else if (random == 2)
    {
        ui->label->setText("Завтра получишь 1 биткойн!");
    }
    else if (random == 3)
    {
        ui->label->setText("Ого! У тебя будет 5 версий Linux!");
    }
    else
    {
        ui->label->setText("Все будет радужно!");
    }
}
