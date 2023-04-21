#include <stdio.h>

int findMax(int x, int y){
    /*else than doing this :
    if (x > y){
        return x
    }else{
        return y
    }
    just do this :*/
    //(condition) ? value if true : value if false;
    return (x > y) ? x : y;
}

int main(){

    int max = findMax(3, 4);

    printf("%d", max);
    return 0;
}