#include <iostream>
using namespace std;

int main() {
    double grade;

    cout << "Enter the student's grade: ";
    cin >> grade;
    
    if (grade >= 85) {
        cout << "Excellent! " << endl;
    }
    else if (grade >= 75) {
        cout << "Very Good performance." << endl;
    }
    else if (grade >= 65) {
        cout << "Good job." << endl;
    }
    else if (grade >= 50) {
        cout << "Pass, but you can do better." << endl;
    }
    else if (grade >= 0) {
        cout << "Failed." << endl;
    }
    else {
        cout << "Invalid grade entered." << endl;
    }

    return 0;
}
