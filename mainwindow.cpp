#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QStandardPaths>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if (!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream fileIn(&file);

    while(!fileIn.atEnd()){
        QListWidgetItem* item = new QListWidgetItem(fileIn.readLine(), ui->listWidget);
        ui->listWidget->addItem(item);
        item->setFlags(item->flags() | Qt::ItemIsEditable);
    }

    file.close();
}

MainWindow::~MainWindow()
{
    delete ui;

    QFile file(QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation) + "\\toDoFile.txt");

    if (!file.open(QIODevice::ReadWrite)){
        QMessageBox::information(0, "error", file.errorString());
    }

    QTextStream fileOut(&file);

    for (int i = 0; i < ui->listWidget->count(); i++) {
        fileOut<<ui->listWidget->item(i)->text()<<"\n";
    }

    file.close();
}

void MainWindow::on_btnAdd_clicked()
{
    QListWidgetItem* item = new QListWidgetItem(ui->addTaskTxt->text(), ui->listWidget);
    ui->listWidget->addItem(item);
    item->setFlags(item->flags() | Qt::ItemIsEditable);
    ui->addTaskTxt->clear();
    ui->addTaskTxt->setFocus();
}


void MainWindow::on_btnRemove_clicked()
{
    QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
    ui->listWidget->removeItemWidget(item);
}


void MainWindow::on_btnRemoveAll_clicked()
{
    ui->listWidget->clear();
}

