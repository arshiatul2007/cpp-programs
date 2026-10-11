
#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
};

int main() {
    Student s;

    cout << "Enter roll number and name: ";
    cin >> s.roll >> s.name;

    cout << "Roll number: " << s.roll << endl;
    cout << "Name: " << s.name;

    return 0;
}
