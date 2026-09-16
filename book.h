#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

class Book{
    public:
        Book(int Id, string title, string author, string genre);
        int getID(){return Id;}
        string getTitle(){return title;}
        string getAuthor(){return author;}
        string getGenre(){return genre;}
        bool getIsCheckedout() const;
        bool getIsReserved() const;
        void checkout();
        void returnBook();
        void reserve();
        void unreserve();

    private:
        int Id;
        string title;
        string author;
        string genre;
        bool isCheckedout;
        bool isReserved; 
};

#endif