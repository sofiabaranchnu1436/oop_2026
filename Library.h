#ifndef UNTITLED4_LIBRARY_H
#define UNTITLED4_LIBRARY_H
#include <string>


class Library {
private:
    std::string Librarytype;
    std::string bookshelves;
    int bookCount ;
    std::string genre ;


public:
    Library(std::string Librarytype, std::string bookshelves,  int bookCount, std::string genre);

    Library() ;

    ~Library();
    void display() ;


};


#endif //UNTITLED4_LIBRARY_H