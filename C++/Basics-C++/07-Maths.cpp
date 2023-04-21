#include <iostream>
#include <cmath> //header that contains most of the C math function

int main(){
    
    double x = 3;
    double y = 2;

    double z;
    double z1;

    z = std::max(x,y);
    z1 = std::min(x,y);

    std::cout << z << "\n" << z1;

// GO SEE www.cplusplus.com/reference/cmath/
    return 0;
}

