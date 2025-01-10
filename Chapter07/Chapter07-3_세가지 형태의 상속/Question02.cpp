// book 클래스를 상속받는 EBook클래스 만들기

#include <iostream>
#include <cstring>
using namespace std;

class Book
{
private:
    char *title;
    char *isbn;
    int price;

public:
    Book(char *newTitle, char *newIsbn, int newPrice)
    {
        title = new char[strlen(newTitle) + 1];
        strcpy(title, newTitle);
        isbn = new char[strlen(newIsbn) + 1];
        strcpy(isbn, newIsbn);
        price = newPrice;
    }
    ~Book()
    {
        delete[] title;
        delete[] isbn;
    }
    void ShowBookInfo()
    {
        cout << "제목: " << title << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "가격: " << price << endl;
    }
};

class EBook : public Book
{
private:
    char *DRMKey;

public:
    EBook(char *newTitle, char *newIsbn, int newPrice, char *newDRMKey)
        : Book(newTitle, newIsbn, newPrice)
    {
        DRMKey = new char[strlen(DRMKey) + 1];
        strcpy(DRMKey, newDRMKey);
    }
    ~EBook()
    {
        delete[] DRMKey;
    }
    void ShowEBookInfo()
    {
        ShowBookInfo();
        cout << "인증키: " << DRMKey << endl;
    }
};

int main(void)
{
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;

    EBook ebook("좋은 C++ ebook", "555-12345-890-0", 10000, "fjemcvo2x48");
    ebook.ShowBookInfo();
    return 0;
}
