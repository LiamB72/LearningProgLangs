#include <iostream>
#include <string>

int main(){
    std::string name;

    std::cout << "What's your name : ";
    std::getline(std::cin, name);

    std::cout << name << "\n";

    if (name.empty()){ //If the name string is empty
        std::cout << "\nPlease enter your name : ";
    }
    
    /*
    name.clear(); //To clear the insides of a string

    name.append("@gmail.com"); //Adds whatever you give it to the string specified

    name.at(0); // Looks to whatever's in index 0 of your string

    

    name.insert(0, "~"); //insert without overwritting anything
    
    name.erase(0, 3);
    */

    return 0;
}