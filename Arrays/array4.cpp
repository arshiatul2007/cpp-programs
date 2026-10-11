
#include <iostream>
using namespace std;

int main() {
    int a[5], i, key;

    cout << "Enter 5 numbers: ";
    for(i = 0; i < 5; i++)
        cin >> a[i];

    cout << "Enter number to search: ";
    cin >> key;

    for(i = 0; i < 5; i++) {
        if(a[i] == key) {
            cout << "Element found";
            return 0;
        }
    }

    cout << "Element not found";
    return 0;
}
