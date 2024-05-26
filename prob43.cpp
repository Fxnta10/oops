#include <iostream>

using namespace std;

int main() {
    // Define constants for number of students and subjects
    const int numStudents = 5;
    const int numSubjects = 4;

    
    int **studentMarks = new int*[numStudents];
    for (int i = 0; i < numStudents; ++i) {
        studentMarks[i] = new int[numSubjects];
    }

    // Read marks for each student
    cout << "Enter marks for " << numStudents << " students in " << numSubjects << " subjects:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter marks for Student " << i + 1 << ":" << endl;
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Enter marks for Subject " << j + 1 << ": ";
            cin >> studentMarks[i][j];
        }
    }

    // Display the marks
    cout << "\nDisplaying marks for " << numStudents << " students in " << numSubjects << " subjects:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "Marks for Student " << i + 1 << ":" << endl;
        for (int j = 0; j < numSubjects; ++j) {
            cout << "Subject " << j + 1 << ": " << studentMarks[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}
