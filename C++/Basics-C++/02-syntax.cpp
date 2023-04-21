#include <iostream>

int main(){
    /*From about every single datatype are the same from C to C++ but string of characters are different
    here how :
    */
    int age = 21;

    std::string name = "Liam";

    //std::cout << name;

    /*Moreover, there's more, like booleans now don't need a special include :*/

    bool switchOn = false;
    bool switchOff = true;

    std::cout << "Hello " << name << ",\nyou are " << age << " years old.";
    return 0;
}