#include "database.h"


DataBase* DataBase::database_p=nullptr;



DataBase *DataBase::Get_Instance(const std::string val)
{
    if (database_p==nullptr) {
        database_p= new DataBase(val);
    }
    return database_p;
}
