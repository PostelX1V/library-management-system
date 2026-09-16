#include "library.h"
using namespace std;

Library::Library() :bookCollection(), numberOfBooks(0) {
    // Add some books to the library
    addBook(Book(1, "Book 1", "Author 1", "Genre 1"));
    addBook(Book(2, "Book 2", "Author 2", "Genre 2"));
    addBook(Book(3, "Book 3", "Author 3", "Genre 3"));
}
void Library::checkoutBook(int id, Book& checkedOutBook) {
    for (Book& book : bookCollection) {
        if (book.getID() == id) {
            if (!book.getIsCheckedout()) { // Use getIsCheckedout() instead of isCheckedout()
                book.checkout();
                return;
            } else {
                throw runtime_error("Book is already checked out");
            }
        }
    }
    throw runtime_error("Book not found");
}

void Library::returnBook(int id) {
    for (Book& book : bookCollection) {
        if (book.getID() == id) {
            if (book.getIsCheckedout()) { // Use getIsCheckedout() instead of isCheckedout()
                book.returnBook();
                return;
            } else {
                throw runtime_error("Book is not checked out");
            }
        }
    }
    throw runtime_error("Book not found");
}

void Library::reserveBook(int id) {
    for (Book& book : bookCollection) {
        if (book.getID() == id) {
            if (!book.getIsReserved()) { // Use getIsReserved() instead of isReserved()
                book.reserve();
                return;
            } else {
                throw runtime_error("Book is already reserved");
            }
        }
    }
    throw runtime_error("Book not found");
}

void Library::addBook(Book book) {
    // Add the book to the collection
    bookCollection.push_back(book);
    numberOfBooks++;
}


void Library::unreserveBook(int id) {
    for (Book& book : bookCollection) {
        if (book.getID() == id) {
            if (book.getIsReserved()) { // Use getIsReserved() instead of isReserved()
                book.unreserve();
                return;
            } else {
                throw runtime_error("Book is not reserved");
            }
        }
    }
    throw runtime_error("Book not found");
}
