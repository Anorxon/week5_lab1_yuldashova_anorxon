#include <iostream>
using namespace std;

int main() {
    int n;
    float grade, gpa;
    gpa = 0;
    cout << "Enter the number of your clases: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter your grade: " << endl;
        cin >> grade;
        gpa = gpa + grade;
    }
    gpa = gpa / n;
    cout << "You total GPA iz " << gpa << endl;
    return 0;
}