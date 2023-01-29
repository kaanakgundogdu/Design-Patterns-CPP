#ifndef DATABASE_H
#define DATABASE_H
#include<string>

class DataBase
{
public:
    DataBase(const DataBase&)=delete;

    void operator = (const DataBase&)=delete;

    static DataBase* Get_Instance(const std::string val);

    std::string get_value() const {
        return value;
    }

protected:
    DataBase(const std::string val): value{val}{};

    std::string value;

    static DataBase* database_p;

};

#endif // DATABASE_H
