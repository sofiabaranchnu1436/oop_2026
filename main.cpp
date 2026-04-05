#include "book.h"
#include "Reader.h"
#include "Library.h"


using namespace std ;

int main() {
    Reader person ("John","00001chnu")  ;
    book book ( "Ядерна фізика", 2204) ;
    Library Library ("internet", "Shelve", 12, "fantasy");
    person.display();
    book.display();
    Library.display();

}