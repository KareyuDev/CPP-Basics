#include <iostream>
using namespace std;

int main() {
    char c;
    int count = 0;

    cout << "Enter text message: ";

    while (cin.get(c) && c != '\n') {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
            c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
            count++;
        }
    }

    cout << "Number of vowels found: " << count;

    return 0;
}