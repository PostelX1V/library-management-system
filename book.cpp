#include "book.h"

Book::Book(int id, string title, string author, string genre) : Id(id), title(title), author(author), genre(genre), isCheckedout(false), isReserved(false) {}

bool Book::getIsCheckedout() const {
    return isCheckedout;
}

bool Book::getIsReserved() const {
    return isReserved;
}

void Book::checkout() {
    isCheckedout = true;
}

void Book::returnBook() {
    isCheckedout = false;
}

void Book::reserve() {
    isReserved = true;
}

void Book::unreserve() {
    isReserved = false;
}