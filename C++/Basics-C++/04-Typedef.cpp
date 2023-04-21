#include <iostream>


//typedef std::string string;

using string = std::string;
using std::cout;

int main(){
    


    string name = "Liam";

    //printf("does this even works in C++ ?\nI'm not sure %s\n", name); <-- doesn't work as C, 
    //just use it to print basic output without variable else it brokes

    int x = 12;

    float y = 12.5;

    //Though this does works
    printf("%d, %f", x, y);

    cout << "\n" << "For sure, " << name << ", this at last, does work";

    return 0;
}