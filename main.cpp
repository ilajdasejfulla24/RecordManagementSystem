#include "../include/RecordManager.h"
#include <iostream>

int main() {

    RecordManager manager;

    int choice;

    do {

        std::cout << "\n===== RECORD MANAGEMENT =====\n";

        std::cout << "1. Add Record\n";
        std::cout << "2. Display All Records\n";
        std::cout << "3. Search Record\n";
        std::cout << "4. Update Record\n";
        std::cout << "5. Delete Record\n";
        std::cout << "6. Sort Records\n";
        std::cout << "7. Export CSV\n";
        std::cout << "0. Exit\n";

        std::cout << "Choice: ";
        std::cin >> choice;

        switch(choice) {

        case 1:
            manager.addRecord();
            break;

        case 2:
            manager.displayAllRecords();
            break;

        case 3:
            manager.searchRecordByID();
            break;

        case 4:
            manager.updateRecord();
            break;

        case 5:
            manager.deleteRecord();
            break;

        case 6:
            manager.sortRecords();
            break;

        case 7:
            manager.exportToCSV();
            break;
        }

    } while(choice != 0);

    return 0;
}
