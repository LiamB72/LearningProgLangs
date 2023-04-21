#include <iostream>
#include <cmath>

int main(){

    float AB;
    float BC;

    double hypotenus;

    std::cout << "What your first segment's lenght? : ";
    std::cin >> AB;
    std::cout << "What your second segment's lenght? : ";
    std::cin >> BC;

    BC = pow(BC, 2);
    AB = pow(AB, 2);

    hypotenus = sqrt(AB+BC);

    std::cout << "The lenght of the hypotenus of your triangle is " << hypotenus;
    return 0;
}