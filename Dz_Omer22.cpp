#include <iostream>

using namespace std;

int main() {
    char op;
    cin >> op;
    switch (op) {
        case 'r': {
            cout << "WAIT";
            break;
        }
        case 'y' : {
            cout << "GET READY";
            break;
        }
        case 'g' : {
            cout << "GO";
            break;
        }
        default: {
            cout << "WRONG INPUT";
            break;
        }
    }
    return 0;
}