#include <iostream>
using namespace std;

int main() {
    int n, res = 1;
    cin >> n;
    for (int i =  2; i <= n; i++) {
        if (i % 2 == 0) {
            res += i;
        }
    }
    cout << res;
    return 0;
    }