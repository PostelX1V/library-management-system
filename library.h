#ifndef LIBRARY_H
#define LIBRARY_H
#include <vector>
#include <string>
#include "book.h"
using namespace std;

class Library{

    public:

        Library();

        void addBook(Book book);

        void checkoutBook(int Id, Book& checkedOutBook);

        void returnBook(int Id);

        void reserveBook(int Id);

        void unreserveBook(int Id);
        
    private:
        int numberOfBooks;
        vector<Book> bookCollection;
        vector<string> genres;

};



#endif