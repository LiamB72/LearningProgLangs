#include <stdio.h>

void triangle(int h, int l){
    for (int i = 1; i < h; i++)
    {
        printf("*\n");
        l++;
        for (int j = 1; j < l; j++)
        {
            printf("*");
        }
        
    }
    printf("*");
}

int main(){
    int hauteur = 5;
    int largeur = 1;

    triangle(hauteur, largeur);
    return 0;
}

/*

def triangle(hauteur, largeur):
    for h in range(1,hauteur):
        print("*")
        largeur+=1
        for l in range(1,largeur):
            print("*", end="")
    print("*")
    
    
*/