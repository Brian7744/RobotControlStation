/********************************************************************************
** Form generated from reading UI file 'robotcontrolstation.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCONTROLSTATION_H
#define UI_ROBOTCONTROLSTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotControlStation
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RobotControlStation)
    {
        if (RobotControlStation->objectName().isEmpty())
            RobotControlStation->setObjectName("RobotControlStation");
        RobotControlStation->resize(800, 600);
        centralwidget = new QWidget(RobotControlStation);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");

        formLayout->setWidget(0, QFormLayout::LabelRole, listWidget);

        RobotControlStation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RobotControlStation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        RobotControlStation->setMenuBar(menubar);
        statusbar = new QStatusBar(RobotControlStation);
        statusbar->setObjectName("statusbar");
        RobotControlStation->setStatusBar(statusbar);

        retranslateUi(RobotControlStation);

        QMetaObject::connectSlotsByName(RobotControlStation);
    } // setupUi

    void retranslateUi(QMainWindow *RobotControlStation)
    {
        RobotControlStation->setWindowTitle(QCoreApplication::translate("RobotControlStation", "RobotControlStation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotControlStation: public Ui_RobotControlStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCONTROLSTATION_H
