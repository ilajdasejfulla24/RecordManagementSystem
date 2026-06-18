#ifndef DATABASE_H
#define DATABASE_H

#include <mysql/mysql.h>

class Database {
private:
    MYSQL* conn;

public:
    Database();
    ~Database();

    bool connect();
    MYSQL* getConnection();
};

#endif
