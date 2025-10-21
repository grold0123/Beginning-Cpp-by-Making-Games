/*
Expensive Calculator
Demonstrates built-in arithmetic operators
*/

#include<iostream>


void result(double x, double y, char operation){    
    switch (operation){
        case '+':
        std::cout << x << " " << operation << " " << y << " = " << x + y << std::endl;break;
        case '-':
        std::cout << x << " " << operation << " " << y << " = " << x - y << std::endl;break;
        case '*':
        std::cout << x << " " << operation << " " << y << " = " << x * y << std::endl;break;
        case '/':
        std::cout << x << " " << operation << " " << y << " = " << x / y << std::endl;break;
        case '%':
        std::cout << "The remainder when dividing "<< x << " by " <<y <<" is " << static_cast<int>(x) % static_cast<int>(y) << std::endl;break;
    }            
}
int main(){

    char operation;
    double first_operand;
    double second_operand;

    std::cout << "Give me the first number: "; std::cin >> first_operand; std::cout << std::endl;
    std::cout << "What operation do you want to do (+,-,*,/,%): "; std::cin >> operation; std::cout << std::endl;
    std::cout << "Give me the second number: "; std::cin >> second_operand; std::cout << std::endl;
    result(first_operand,second_operand,operation);
    return 0;
}