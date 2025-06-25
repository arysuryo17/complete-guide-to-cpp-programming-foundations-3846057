// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

/*#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}*/

#include <iostream>
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
}