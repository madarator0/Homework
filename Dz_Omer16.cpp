#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int n;
    cout << "Enter a number:\n ";
    while (true) {
        cin >> n;
        if (n==0) {
            break;
        }
        a++;
    }
    cout << "You entered " << a << " numbers.";
    return 0;
}