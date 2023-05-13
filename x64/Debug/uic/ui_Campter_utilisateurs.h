/********************************************************************************
** Form generated from reading UI file 'Campter_utilisateurs.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMPTER_UTILISATEURS_H
#define UI_CAMPTER_UTILISATEURS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Campter_utilisateursClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Campter_utilisateursClass)
    {
        if (Campter_utilisateursClass->objectName().isEmpty())
            Campter_utilisateursClass->setObjectName("Campter_utilisateursClass");
        Campter_utilisateursClass->resize(600, 400);
        menuBar = new QMenuBar(Campter_utilisateursClass);
        menuBar->setObjectName("menuBar");
        Campter_utilisateursClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Campter_utilisateursClass);
        mainToolBar->setObjectName("mainToolBar");
        Campter_utilisateursClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Campter_utilisateursClass);
        centralWidget->setObjectName("centralWidget");
        Campter_utilisateursClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Campter_utilisateursClass);
        statusBar->setObjectName("statusBar");
        Campter_utilisateursClass->setStatusBar(statusBar);

        retranslateUi(Campter_utilisateursClass);

        QMetaObject::connectSlotsByName(Campter_utilisateursClass);
    } // setupUi

    void retranslateUi(QMainWindow *Campter_utilisateursClass)
    {
        Campter_utilisateursClass->setWindowTitle(QCoreApplication::translate("Campter_utilisateursClass", "Campter_utilisateurs", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Campter_utilisateursClass: public Ui_Campter_utilisateursClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMPTER_UTILISATEURS_H
