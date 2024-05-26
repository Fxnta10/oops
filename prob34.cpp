#include <iostream>
using namespace std;

// Function to calculate Simple Interest with default argument for rate
float simpleInterest(float principal, float time, float rate = 12.0) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, time;
    
    cout << "Enter principal amount: ";
    cin >> principal;
    
    cout << "Enter time (in years): ";
    cin >> time;
    
    // Calculate Simple Interest with default rate
    float interest = simpleInterest(principal, time);
    
    cout << "Simple Interest: " << interest << endl;
    
    return 0;
}
