#include <iostream>
#include <fstream>
#include "src/SP_BIN.h"

using namespace std;

int main(int, char**) {
    std::cout << "Hello, world!\n";

    octet * o =  new octet(65);
    cout << o->get_hexs() << "\n";
    cout << (int)o->get_hexs() << "\n";
    cout << "0x" << *o << "\n";
    ifstream file;
    file.open("C:/Users/haron/Desktop/sp hack/samples/PTN00119.BIN");
    if (!file)
        cout << "error\n";
    char c;
    file >> hex >> c;
    cout << (int)c;
    
}
