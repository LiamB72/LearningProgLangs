#include <stdio.h>
#include <stdbool.h>

int main()
{
    float a = 0.123456789012345;      //32 bits (4 bytes) -> 5 - 7 Digits precision       
    //displayed by : %f
    double b = 0.123456789012345;     //64 bits (8 bytes) -> 15 - 16 Digits precision     
    //displayed by : %lf

    printf("%0.15f\n",a);
    printf("%0.15f\n",b);

    bool c = true;      //bool values is displayed by : %d (1 byte, with true = 1)   
    bool d = false;     //bool values is displayed by : %d (1 byte, with false = 0)

    printf("c is equal to %d, which is true, but d is equal to %d, which is false\n",c,d);

    char e = 'E'; //ord() function -> displayed by : %d
    char f = 42;  //chr() function -> displayed by : %c

    printf("%c = %d, and %d = '%c'\n",e,e,f,f);


    /*  *Exist the unsigned char which goes from 0 to 255 (bigger and it overflows = error)
        it is noted like this : unsigned char n = ..
        --> Use : double the range of positive number stored into one variable.

        To be noted too, that regular char are signed from the start.
        It goes from -128 to 127, bigger and it overflows -> goes back to min value possible.
        Also, no need to note : signed char n = ..                                              */

    unsigned char g = 246;  //displayed by : %d or %c
    char h = -123;          //displayed by : %d or %c

    printf("\nG = %d, H = %d\n",g,h);
    printf("G = %c, H = %c\n",g,h);

    /*  So from basic, you have the bytes, bits, etc...
        As we saw previously, the char declaration has up to 256 values -> 1 byte
        But wait, there's more : 

        2 bytes:
        Short Intergers ---------------> -32,768 to +32,767                displayed by : %d
        Unsigned Short Intergers ------> 0 to +65,535                      displayed by : %d

        4 bytes:
        (Long) Intergers --------------> -2,147,483,648 to +2,147,483,647  displayed by : %d
        Unsigned (Long) Intergers -----> 0 to +4,294,967,295               displayed by : %u

        8 bytes:
        Long long Intergers -----------> -9 quintillion to +9 quintillion (-2^63 to +2^63)    displayed by : %lld
        Unsigned Long long Intergers --> 0 to +18,446,744,073,709,551,616 (+18 quintillion)   displayed by : %llu
        (For long long interger, if too big, can have a warning, to prevent it, just put a "U" at the end of it.)
    */

    //A constant is a fixed value that can't be change later whilst the code's runnin'.

    const float pi = 3.14159;
    //pi = 420.69;  can't be changed

    printf("Pi = %.5f\n", pi);

    float abc = 6.21;
    printf("Before : %.2f\n", abc);
    abc = 2.14;  // can be changed
    printf("After : %.2f\n", abc);

    

    return 0;
}
