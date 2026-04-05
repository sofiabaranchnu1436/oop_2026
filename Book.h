#ifndef UNTITLED4_BOOK_H
#define UNTITLED4_BOOK_H
#include <string>


class book {
private:
    std:: string title;
    std:: string author;
    int book_id;
public:
    book(std::string title, std::string author, int id);
    book(std::string title, int id);
    book(std::string title);
    ~book();
    void display();

};


#endif //UNTITLED4_BOOK_H
