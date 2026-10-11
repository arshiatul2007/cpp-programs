
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
};

int main() {
    Data d;

    cout << "Enter a float: ";
    cin >> d.f;

    cout << "Float = " << d.f;

    return 0;
}
