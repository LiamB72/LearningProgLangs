#include <iostream>
#include <cmath>

void Calculate(char op, double a, double b){
    double res;
    switch (op)
    {
    case '+':
            res = a+b;
            
        break;
    
    case '-':
            res = a-b;
        break;
    
    case '*':
            res = a*b;
        break;
    
    case '/':
            res = a/b;
        break;
    
    default:
        break;
    }
    std::cout << res;
}

int main(){

    char op;

    std::cout << "What operation will you do? (+ - * /) : ";
    std::cin >> op;

    double num1;
    double num2;

    std::cout << "What's your first number : ";
    std::cin >> num1;

    std::cout << "What's your second number : ";
    std::cin >> num2;

    Calculate(op, num1, num2);
    return 0;
}