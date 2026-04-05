#include "Reader.h"
#include <iostream>

Reader::Reader(std::string name, std::string numbercard)
    :name(name), numbercard(numbercard) {
    std::cout<<"Reader "<<name<<" created"<<std::endl;
}

Reader::Reader(std::string numbercard)
    :Reader("New Reader" , numbercard) {}

Reader::~Reader() {
    std::cout<<"Reader "<<name<<" destroyed"<<std::endl;
}
void Reader::display() {
    std::cout<<"Reader "<<name<<" displayed"<<". Number card: "<<numbercard<<std::endl;
}
