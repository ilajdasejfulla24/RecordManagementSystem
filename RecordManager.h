#ifndef RECORDMANAGER_H
#define RECORDMANAGER_H

#include "Database.h"
#include "Record.h"

class RecordManager {
private:
    Database db;

public:
    RecordManager();

    void addRecord();
    void displayAllRecords();
    void searchRecordByID();
    void deleteRecord();
    void updateRecord();
    void sortRecords();
    void exportToCSV();
};

#endif
