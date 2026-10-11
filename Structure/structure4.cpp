
#include <iostream>
using namespace std;

struct Rectangle {
    int length, breadth;
};

int main() {
    Rectangle r;

    cout << "Enter length and breadth: ";
    cin >> r.length >> r.breadth;

    cout << "Area = " << r.length * r.breadth;

    return 0;
}
