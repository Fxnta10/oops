#include <iostream>
#include <cmath>
using namespace std;

class QuadraticEquation {
private:
    float a, b, c;

public:
    // Default constructor
    QuadraticEquation() {
        a = 0;
        b = 0;
        c = 0;
    }

    // Parameterized constructor
    QuadraticEquation(float coeffA, float coeffB, float coeffC) {
        a = coeffA;
        b = coeffB;
        c = coeffC;
    }

    // Function to calculate discriminant
    float calculateDiscriminant() {
        return b * b - 4 * a * c;
    }

    // Function to calculate roots
    void calculateRoots() {
        float discriminant = calculateDiscriminant();
        
        if (discriminant > 0) {
            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Roots are real and different." << endl;
            cout << "Root 1 = " << root1 << endl;
            cout << "Root 2 = " << root2 << endl;
        } else if (discriminant == 0) {
            float root = -b / (2 * a);
            cout << "Roots are real and same." << endl;
            cout << "Root = " << root << endl;
        } else {
            cout << "Roots are imaginary." << endl;
        }
    }
};

int main() {
    // Create object using default constructor
    QuadraticEquation equation;

    float a, b, c;
    cout << "Enter coefficients of the quadratic equation (a, b, c): ";
    cin >> a >> b >> c;

    
    equation = QuadraticEquation(a, b, c);

    
    equation.calculateRoots();

    return 0;
}
