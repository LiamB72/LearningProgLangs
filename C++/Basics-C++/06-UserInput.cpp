#include <iostream>

int main(){
    std::string name;

    int age;

    //std::cout << "What's your name?";
    //std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age; //this gets a new line in the buffer which is problematic..


    //std::cout << "What's your name? ";
    //std::getline(std::cin, name); //this getline function is like fgets w/o a new line :)

    //correct code to be using
    std::cout << "What's your name? ";
    std::getline(std::cin >> std::ws/*it checks off the whitespaces from the cin before*/, name);

    std::cout << "Pleasure to meet you " << name;

    if (age >= 18){
        std::cout << "\nNice to know you are " << age;
    } else {
        std::cout << "\nSorry for asking little fellas!";
    }


    return 0;
}