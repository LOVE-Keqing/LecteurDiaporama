#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#define DATASE_NAME"sae201_diaporama"
#define CONNECT_TYPE "QODBC"

class Database
{
public:
    Database();
    bool openDataBase();
    void closeDataBase();

private:
    QSqlDataBase _mydb;
};

#endif // DATABASE_H
