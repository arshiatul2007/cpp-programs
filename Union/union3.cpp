
#include <iostream>
using namespace std;

union Data {
    int i;
    char c;
};

int main() {
    Data d;

    cout << "Enter a character: ";
    cin >> d.c;

    cout << "Character = " << d.c;

    return 0;
}
