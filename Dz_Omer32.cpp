#include <iostream>
using namespace std;

int main() {
    string fName, lName;
    cin >> fName;
    cin >> lName;
    cout << fName[0] << " . ";
    for (int i = 0; i < 4; i++) {
        cout << lName[i];
    }
    return 0;
}