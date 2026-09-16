#include <iostream>
#include "book.h"
#include "library.h"
using namespace std;

int main() {
    Library library;

    // Add some books to the library
    library.addBook(Book(1, "Book 1", "Author 1", "Genre 1"));
    library.addBook(Book(2, "Book 2", "Author 2", "Genre 2"));
    library.addBook(Book(3, "Book 3", "Author 3", "Genre 3"));

    while (true) {
        cout << "Select an option:\n";
        cout << "1. Check out a book\n";
        cout << "2. Reserve a book\n";
        cout << "3. Unreserve a book\n";
        cout << "4. Quit\n";

        int option;
        cin >> option;

        if (option == 1) {
    int id;
    cout << "Enter the ID of the book you want to check out: ";
    cin >> id;
    Book checkedOutBook(id, "", "", ""); // Provide arguments for the Book constructor
    try {
        library.checkoutBook(id, checkedOutBook); // Pass checkedOutBook as reference
        cout << "You have checked out " << checkedOutBook.getTitle() << " by " << checkedOutBook.getAuthor() << ".\n";
    } catch (const runtime_error& e) {
        cout << e.what() << endl; // Print the error message
    }
}

 else if (option == 2) {
            int id;
            cout << "Enter the ID of the book you want to reserve: ";
            cin >> id;
            library.reserveBook(id);
            cout << "Book reserved.\n";
        } else if (option == 3) {
            int id;
            cout << "Enter the ID of the book you want to unreserve: ";
            cin >> id;
            library.unreserveBook(id);
            cout << "Book unreserved.\n";
        } else if (option == 4) {
            break;
        } else {
            cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}