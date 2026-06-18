#ifndef RECORD_H
#define RECORD_H

#include <string>

class Record {
private:
    int id;
    std::string title;
    std::string author;
    int year;

public:
    Record();
    Record(int id, std::string title,
           std::string author, int year);

    int getId() const;
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setYear(int year);
};

#endif
