#include <stdio.h>

double multiply(double n1, double n2, double a){
    if (n2 > 0){
        for (size_t i = 0; i < n2; i++)
        {
            a += n1;
        }
        printf("%.2lf by %.2lf is equal to %.2lf", n1, n2, a);
    } else {
        if (n2 < 0){
            for (size_t i = n2; i > 0; i++)
            {
                a -= n1;
            }
            printf("%.2lf by %.2lf is equal to %.2lf", n1, n2, a);
        }
        else {
            printf("%.2lf by %.2lf is equal to %.2lf", n1, n2, a);
        }
    }
}

int main(){
    
    double n1; 
    double n2;

    double a = 0;

    printf("What's your first number? ");
    scanf("%lf", &n1);

    printf("What's your first number? ");
    scanf("%lf", &n2);

    multiply(n1,n2,a);
    return 0;
}