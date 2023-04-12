#include <stdio.h>

enum list{Sun, Mon, Tue, Wed, Thu, Fri, Sat}; 
//to be treated as a list of numbers that are named that you change to whatever pleases you.
//Both name and numbers (index) are changable
//example:
//enum list{Sun=7, Mon=1, Tue=2, Wed=3, Thu=4, Fri=5, Sat=6};

int main(){
    
    enum list today = Mon;

    //printf("%d\n", today); // enums aren't strings, but they can be treated as integers

    if (today == Sun || today == Sat){
        printf("It's the weekend!");
    } else {
        printf("Let's go to work!");
    }
    return 0;
}