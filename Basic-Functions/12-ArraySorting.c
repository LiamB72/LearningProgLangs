#include <stdio.h>

void sort(char array[], int sizeArray){
    for (int i = 0; i < sizeArray - 1; i++)
    {
        for (int j = 0; j < sizeArray - i - 1; j++)
        {
            if (array[j] > array[j + 1]){

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;    
            }
        }
    }

    for (int i = 0; i < sizeArray; i++){
        printf("%c ",array[i]);
    }
    
}

int main(){
    
    //int array[] = {9, 2, 1, 3, 54, 13, 7,5};
    char array[] = {'T','H','C','G','A'};

    int sizeArray = sizeof(array)/sizeof(array[0]);

    sort(array,sizeArray);
    return 0;
}