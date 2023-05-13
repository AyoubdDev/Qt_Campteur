#include "Campter_utilisateurs.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMetaClassInfo>
#include <warning.h>
#include "ConnexionBD.h"
#include <qlayout.h>
#include <qlabel.h>
#include <QVBoxLayout>
#include <QtWidgets/QApplication>
#include <qlineedit.h>
#include <qpushbutton.h>



Campter_utilisateurs::Campter_utilisateurs(QWidget *parent)
    : QMainWindow(parent)

{
    ui.setupUi(this);
    setWindowTitle("login");
    
    connexion();
  
  
    QPushButton* button = new QPushButton("Compter", this);
    button->setGeometry( 300, 100, 80, 30);
    
    connect(button, &QPushButton::clicked, [=]() {

        QSqlQuery requete;
        int count = 0;
        requete.exec("select count(*) From usertable");
        while (requete.next()) {
            count = requete.value(0).toInt();
        }
        QMessageBox::information(this,"Le nombre d'utilisateurs:  ", QString::number(count));
        
        });

 


    
  

  
 

}
void Campter_utilisateurs::insertDB() {
    QSqlQuery query;
    query.prepare("INSERT INTO usertable (username) VALUES (:username1), (:username2), (:username3)");

    QString username1 = "Ayoub";
    QString username2 = "Ahmed";
    QString username3 = "said";

    query.bindValue(":username1", username1);
    query.bindValue(":username2", username2);
    query.bindValue(":username3", username3);

    query.exec();
}

void Campter_utilisateurs::on_pushButton_Send_clicked() {

    QSqlQuery requete;
    int count = 0;
    requete.exec("select count(*) From usertable");
    while (requete.next()) {
        count = requete.value(0).toInt();
    }
    QMessageBox::warning(this, "Nombres d'utilsateurs c'est:", QString::number(count));
};

Campter_utilisateurs::~Campter_utilisateurs()
{}
