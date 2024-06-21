#include <iostream>
#include <stdexcept>

using namespace std;


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b == 0) {
        throw "Error: Division by zero!";
    }
    return a / b;
}

int main() {
    double num1, num2;

    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        
        cout << "Sum: " << add(num1, num2) << endl;
        cout << "Difference: " << subtract(num1, num2) << endl;
        cout << "Product: " << multiply(num1, num2) << endl;
        cout << "Quotient: " << divide(num1, num2) << endl;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl; // Print error message from exception
    }


    return 0;
}
