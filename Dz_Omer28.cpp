#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int n, a, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a = 1+ rand() % 100;
        cout << a << " ";
        res += a;
    }
    cout << endl << res;
    return 0;
}