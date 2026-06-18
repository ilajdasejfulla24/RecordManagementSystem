#include "../include/RecordManager.h"
#include <iostream>

RecordManager::RecordManager() {
    db.connect();
}

void RecordManager::addRecord() {

    int id, year;
    std::string title, author;

    std::cout << "ID: ";
    std::cin >> id;

    std::cin.ignore();

    std::cout << "Title: ";
    getline(std::cin, title);

    std::cout << "Author: ";
    getline(std::cin, author);

    std::cout << "Year: ";
    std::cin >> year;

    std::string query =
        "INSERT INTO books VALUES(" +
        std::to_string(id) + ",'" +
        title + "','" +
        author + "'," +
        std::to_string(year) + ")";

    mysql_query(
        db.getConnection(),
        query.c_str()
    );

    std::cout << "Record added.\n";
}
