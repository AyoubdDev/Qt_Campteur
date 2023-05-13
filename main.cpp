#include "Campter_utilisateurs.h"
#include <QtWidgets/QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <qlayout.h>
#include <qlabel.h>
#include <QVBoxLayout>
#include <qlineedit.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Campter_utilisateurs w;
    w.show();
  

    return a.exec();
}
