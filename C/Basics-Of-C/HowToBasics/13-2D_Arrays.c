#include <stdio.h>
#include <string.h>


int main(){
    /*
    //int numbers[numbers of arrays][number of element in each arrays] = {{},{}};
    //Also can't assign a different number in the array if that specified number is already assigned
    
    int numbers[3][3] = {
                        {1,2,3},
                        {4,5,6},
                        {7,8,9}
                        };

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    /*
    int numbers[2][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;
    

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }
    */

    // char numbers[untouched][max size of the each string] = {...}
    char numbers[][10] = {"ones","two","three","four","five","six","seven","eight","nine"};

    //to change a string in the array:
    strcpy(numbers[0], "one");

    for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++){
        printf("\n%s", numbers[i]);
    }

    return 0;
}