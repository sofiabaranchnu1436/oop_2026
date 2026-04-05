#include "Library.h"
#include <iostream>

Library::Library(std::string Librarytype, std::string bookshelves,  int bookCount, std::string genre)
    :Librarytype(Librarytype), bookshelves(bookshelves), bookCount(bookCount), genre(genre) {}
Library::Library()
: Library (std::string (""), std::string(""), 0, std::string
    ("")){}
Library::~Library() {}

void Library::display()  {
    std::cout <<"Library: "<<std::endl<< "Library type: " << Librarytype<<std::endl <<"bookshelves: "<<bookshelves<<std::endl<<"bookCount "<<bookCount<<std::endl<<"genre "<<genre<< std::endl;
}
