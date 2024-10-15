/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *addTaskTxt;
    QPushButton *btnAdd;
    QListWidget *listWidget;
    QPushButton *btnRemove;
    QPushButton *btnRemoveAll;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(414, 619);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        addTaskTxt = new QLineEdit(centralwidget);
        addTaskTxt->setObjectName("addTaskTxt");
        addTaskTxt->setGeometry(QRect(10, 10, 301, 31));
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setGeometry(QRect(320, 10, 80, 24));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 50, 391, 521));
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(230, 580, 80, 24));
        btnRemoveAll = new QPushButton(centralwidget);
        btnRemoveAll->setObjectName("btnRemoveAll");
        btnRemoveAll->setGeometry(QRect(320, 580, 80, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        btnRemoveAll->setText(QCoreApplication::translate("MainWindow", "Remove All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
