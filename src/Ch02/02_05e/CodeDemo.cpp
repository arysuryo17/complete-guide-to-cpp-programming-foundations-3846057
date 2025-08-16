// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}


/*#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter number one: ";
    cin >> num1;
    cout << "Enter number two: "; 
    cin >> num2;

    switch(op) {
        case '+':
        cout <<"The result is ";
            cout << num1 + num2;
            break;
        case '-':
        cout <<"The result is ";
            cout << num1 - num2;
            break;
        case '*':
        cout <<"The result is ";
            cout << num1 * num2;
            break;
        case '/':
        cout <<"The result is ";
            if(num2 != 0)
                cout << num1 / num2;
            else
                cout << "Division by zero!";
            break;
        default:
            cout << "Invalid operator";
    }
    return 0;
}*/