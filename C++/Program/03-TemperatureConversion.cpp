#include <iostream>

int main(){
    
    char unit;
    int temp;

    std::cout << "**************Temperature Conversion****************\n";
    
    std::cout << "\nWhat unit are you using? (C) or (F) : ";
    std::cin >> unit;

    unit = toupper(unit);

    switch (unit)
    {
    case 'C':
        std::cout << "\nWhat temperature are you converting? : ";
        std::cin >> temp;

        temp = (temp * 9 / 5) + 32;
        std::cout << "\nThe temperature in Fahrenheit is " << temp << "F";
        break;
    
    case 'F':
        std::cout << "\nWhat temperature are you converting? : ";
        std::cin >> temp;

        temp = ((temp - 32) *  5) / 9;
        std::cout << "\nThe temperature in Celsius is " << temp << " degree celcius";
        break;
    
    default:
        std::cout << "\nPlease enter a valid unit : ";
        std::cin >> unit;
        break;
    }
    return 0;
}