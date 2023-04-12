#include <stdio.h>

void sort(int array[], int sizeArray){
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
    printf("Your list sorted : ");
    for (int i = 0; i < sizeArray; i++){
        printf("%d ",array[i]);
    }
    
}

int main(){
    
    int i = 0;
    int n;
    
    printf("\nPlease enter a number of max values, for which you will have to enter next: ");
    scanf("%d",&n);

    //char array[n];
    int array[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nPlease enter a value: ");
        scanf("%d", &array[i]);
    }

    printf("Your list : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", array[i]);
    }
    
    printf("\n");
    
    int sizeArray = sizeof(array)/sizeof(array[0]);

    sort(array,sizeArray);
    return 0;
}