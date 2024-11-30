#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->radioButton->setText(QString("Текст1"));
    ui->radioButton_2->setText(QString("Текст2"));

    ui->comboBox->addItem(QString("Вариант1"));
    ui->comboBox->addItem(QString("Вариант2"));
    ui->comboBox->addItem(QString("Вариант3"));

    ui->pushButton->setText(QString("Нажми на меня"));
    ui->pushButton->setCheckable(true);

    ui->progressBar->setValue(0);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(10);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(val == 10){
        val = 0;
        ui->progressBar->setValue(val);
    }
    else{
        val+=1;
        ui->progressBar->setValue(val);
    }
}

