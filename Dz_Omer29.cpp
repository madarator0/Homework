#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int n;
    n = -10 + rand() % (10 - (-10) + 1);
    cout << "n = " << n;
    if (n == 0){
        cout << "n = 0";
        return 0;
    }
    else if (n > 0) {
        cout << " n > 0";
    }
    else {
        cout << " n < 0";
    }
    if (n % 2 == 0) {
        cout << " and even";
    }
    else {
        cout << " and odd";
    }

    return 0;
}