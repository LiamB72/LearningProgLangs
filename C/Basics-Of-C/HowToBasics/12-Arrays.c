#include <stdio.h>

int main(){

    double prices[] = {5.00, 10.00, 23.59, 13.29, 99.99};
    int lenghtList = sizeof(prices)/sizeof(prices[0]);

    //This is a bit complex, but the sizeof function is working with bytes, as each double takes 8 bytes
    // meaning that 8*5 = 45 bytes and this divied by the sizeof one of the element of that list
    // thus 45/8 it return 5 elements. This is the equivalence of saying len(list), lol.

    for (int i = 0; i < lenghtList; i++)
    {
        printf("$%.2lf\n", prices[i]);
    }
    
    
    return 0;
}