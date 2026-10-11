
#include <iostream>
using namespace std;

enum Choice {YES = 1, NO = 2};

int main() {
    int n;
    cout << "Enter 1 for Yes, 2 for No: ";
    cin >> n;

    if(n == YES)
        cout << "You selected Yes";
    else if(n == NO)
        cout << "You selected No";
    else
        cout << "Invalid choice";

    return 0;
}
