#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    float num;

    for (int i = 0; i < 6; i++){num = (rand() % 6) + 1;std::cout << "\n" << num;}

    

    return 0;
}