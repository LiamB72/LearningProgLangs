#include <iostream>

int main(){
    int temp = 25;
    bool sunny = true;

    std::cout << ((temp >= 0 && sunny|| temp <= 30 && sunny) ? "The Weather's looking pretty good today!" : "The Weather's looking pretty bad today!");
    
    return 0;
}