
#include <iostream>
using namespace std;

// Function template to calculate the sum of three numbers
template <typename T>
T sum(T a, T b, T c) {
    return a + b + c;
}

int main() {
    // Testing the sum function with integers
    int int1 = 1, int2 = 2, int3 = 3;
    cout << "Sum of integers: " << sum(int1, int2, int3) << endl;

    // Testing the sum function with floats
    float float1 = 1.1f, float2 = 2.2f, float3 = 3.3f;
    cout << "Sum of floats: " << sum(float1, float2, float3) << endl;

    return 0;
}