#include <iostream>
using namespace std;

void square(int *num){
    *num *= *num;
}

int main(){
    // int x = 10;
    // int y = x;

    // int *pointer;
    // pointer = &x;
    // x = 20;

    // cout << "Valor de X: " << x << endl;
    // cout << "Valor de Y: " << y << endl;
    // cout << "Endereço de X " << &x << endl;
    // *pointer = 444;
    // cout << "Valor de pointer: " << *pointer << " " << pointer << endl;
    // cout << "Valor de X: " << x << endl;

    int number;

    cout << "Digite um nr: " << endl;
    cin >> number;

    cout << "Number " << number << endl;

    square(&number);
    cout << "Square result " << number << endl;

    return 0;
}