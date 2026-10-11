
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

int main() {
    Data d;

    cout << "Enter an integer: ";
    cin >> d.i;

    cout << "Integer = " << d.i;

    return 0;
}
