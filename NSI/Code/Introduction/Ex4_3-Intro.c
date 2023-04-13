#include <stdio.h>

void table(float operande, float valMin, float valMax){
    double res;
    for (int i = valMin; i < valMax; i++)
    {
        res = i*operande;
        printf("%.2f * %d = %.2lf\n",operande,i,res);
    }
    
}

int main(){
    
    table(5,0,10);

    return 0;
}