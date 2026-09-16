#include <iostream>
#include <stdexcept>
#include "book.h"
#include "library.h"

using namespace std;

int main() {
    Library library;

    while (true) {
        cout << "\nSelect an option:\n";
        cout << "1. Check out a book\n";
        cout << "2. Return a book\n";
        cout << "3. Reserve a book\n";
        cout << "4. Unreserve a book\n";
        cout << "5. Quit\n";
        cout << "Enter choice: ";

        int option;
        cin >> option;

        try {
            if (option == 1) {
                int id;
                cout << "Enter the ID of the book you want to check out: ";
                cin >> id;

                Book checkedOutBook(id, "", "", "");
                library.checkoutBook(id, checkedOutBook);

                cout << "You have checked out "
                     << checkedOutBook.getTitle()
                     << " by "
                     << checkedOutBook.getAuthor()
                     << ".\n";
            }
            else if (option == 2) {
                int id;
                cout << "Enter the ID of the book you want to return: ";
                cin >> id;

                library.returnBook(id);
                cout << "Book returned successfully.\n";
            }
            else if (option == 3) {
                int id;
                cout << "Enter the ID of the book you want to reserve: ";
                cin >> id;

                library.reserveBook(id);
                cout << "Book reserved successfully.\n";
            }
            else if (option == 4) {
                int id;
                cout << "Enter the ID of the book you want to unreserve: ";
                cin >> id;

                library.unreserveBook(id);
                cout << "Book unreserved successfully.\n";
            }
            else if (option == 5) {
                cout << "Exiting library system.\n";
                break;
            }
            else {
                cout << "Invalid option. Please try again.\n";
            }
        }
        catch (const runtime_error& e) {
            cout << "Error: " << e.what() << '\n';
        }
    }

    return 0;
}