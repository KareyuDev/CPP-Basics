#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int x = 1; x <= n; x++) {
        if(x % 2 != 0) {
            cout << x << endl;
        }
    }

    return 0;
}