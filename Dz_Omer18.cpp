#include <iostream>

using namespace std;

int fok(int n) {
    int res = 1;
    for (int l = 1; l <= n; l++) {
        res *= l;
    }
    return res;
}

int main() {
    float n, res = 0;
    cin >>n;
    for(int i = 1; i <= n; i++) {
        res += i + (n-1)/fok(i);
    }
    cout << res;
    return 0;
}