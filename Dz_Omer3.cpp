#include <iostream>
using namespace std;

int main() {
    int n, co = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            co++;
        }
    }
    if (co == 2) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}