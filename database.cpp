#include "../include/Database.h"
#include <iostream>

Database::Database() {
    conn = mysql_init(nullptr);
}

Database::~Database() {
    mysql_close(conn);
}

bool Database::connect() {

    conn = mysql_real_connect(
        conn,
        "localhost",
        "root",
        "",
        "record_db",
        3306,
        NULL,
        0
    );

    if (!conn) {
        std::cout << "Connection failed\n";
        return false;
    }

    return true;
}

MYSQL* Database::getConnection() {
    return conn;
}
