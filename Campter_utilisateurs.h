#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Campter_utilisateurs.h"
#include "QMessageBox"


class Campter_utilisateurs : public QMainWindow
{
    Q_OBJECT

public:
    Campter_utilisateurs(QWidget *parent = nullptr);
    
    ~Campter_utilisateurs();
private slots :
    void on_pushButton_Send_clicked();
    void  insertDB();

private:
    Ui::Campter_utilisateursClass ui;
};
