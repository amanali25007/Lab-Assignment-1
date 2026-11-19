#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "\nEnter Student " << i << " Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter GPA: ";
        cin >> gpa;

        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
        cout << "GPA: " << gpa << endl;
    }

    return 0;
}
