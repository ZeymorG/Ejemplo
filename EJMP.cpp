#include <iostream>

using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Ingrese operador (+, -, *, /): ";
    cin >> op;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                cout << num1 / num2;
            else
                cout << "Error: Division por cero";
            break;
        default:
            cout << "Operador no valido";
            break;
    }

    return 0;
}
