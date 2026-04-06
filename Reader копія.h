#ifndef UNTITLED4_READER_H
#define UNTITLED4_READER_H
#include <string>

class Reader {
private:
    std::string name;
    std::string numbercard;
public:
    Reader (std::string name ="Guest", std::string numbercard = "0000000");
    Reader(std::string numbercard);
    ~Reader();
    void display();
};


#endif //UNTITLED4_READER_H
