
#include <iostream>
using namespace std;

int main() {
    int a[5], i, max;

    cout << "Enter 5 numbers: ";
    for(i = 0; i < 5; i++) {
        cin >> a[i];
    }

    max = a[0];

    for(i = 1; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
    }

    cout << "Largest = " << max;
    return 0;
}
