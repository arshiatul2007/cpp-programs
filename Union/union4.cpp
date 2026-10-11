
#include <iostream>
using namespace std;

union Data {
    int i;
    char c;
    float f;
};

int main() {
    Data d;

    cout << "Size of union = " << sizeof(d);

    return 0;
}
