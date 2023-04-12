#include <stdio.h>

int main(){


    for( int i = 1;          i <= 20;           i++){ 
        //declare an index  Then a condition   And what happends for each iteration.
        
        //remember that ++ means increment, thus saying i += n will also work
        //same with -- meaning decrement, thus i -= n also works.
        printf("%d\n",i);

        /*
            if (i == 13){
                continue; //basically skip and force the next iteration of the loop
            }
        */
    }

    return 0;
}