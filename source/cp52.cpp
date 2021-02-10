#include <iostream>
using namespace std;

class Book {
       public:
             string title;
             string author;
             int pages;
             Book(string aTitle, string aAuthor, int aPages) {
             title = aTitle;
             author = aAuthor;
             pages = aPages;       

}

};

int main()

{
    Book book1;
    book1.title = "Harry Potter";
    book1.author = "JK Rowling";
    book1.pages = 500;
    
    Book book2;
    book2.title = "Lord of the Rings";
    book2.author = "Dolkein";
    book2.pages = 600;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;
    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;
    return 0;

}
