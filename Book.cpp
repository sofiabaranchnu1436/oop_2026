
#include <iostream>
#include "book.h"
book::book(std::string title,int id):title(title), book_id(id) {} ;
book::book(std::string title):title(title), book_id(0000){}
book::~book() { std::cout<<"book "<< book_id << " closed "<<std::endl;


}
void book::display() {
    std::cout<<title<<std::endl;
}