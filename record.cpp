#include "../include/Record.h"

Record::Record() {}

Record::Record(int id, std::string title,
               std::string author, int year)
{
    this->id = id;
    this->title = title;
    this->author = author;
    this->year = year;
}

int Record::getId() const {
    return id;
}

std::string Record::getTitle() const {
    return title;
}

std::string Record::getAuthor() const {
    return author;
}

int Record::getYear() const {
    return year;
}

void Record::setTitle(std::string title) {
    this->title = title;
}

void Record::setAuthor(std::string author) {
    this->author = author;
}

void Record::setYear(int year) {
    this->year = year;
}
