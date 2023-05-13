#pragma once


#include <QtWidgets/QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

static bool connexion()
{

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("localhost");
    db.setDatabaseName("Utlisateurs");
    db.setUserName("postgres");
    db.setPassword("ayoub");

    if (!db.open()) {
        return false;
    }
   
    return true;
}