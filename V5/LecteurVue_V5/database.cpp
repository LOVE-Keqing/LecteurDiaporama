#include "database.h"

Database::Database()
{

}

bool Database::openDataBase()
{
    _mybd = QSqlDatabase::addDatabase(CONNECT_TYPE);
    _mydb.setDatabaseName(DATASE_NAME);
    return _mydb.open();
}

void Database::closeDataBase()
{
    _mybd.close();
}
