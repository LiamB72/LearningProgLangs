#include <stdio.h>

int main(){
    for (int y = 0; y <= 10; y++)
    {
        for (int x = 0; x <= 10; x++)
        {
            int res=y*x;
            printf("%d\t",res);
        }
        printf("\n");
    }
    
    return 0;
}