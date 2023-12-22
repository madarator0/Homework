#include <iostream>

using namespace std;

float fok(int n) {
    float res = 1;
    for (int l = 1; l <= n; l++) {
        res *= l;
    }
    return res;
}

int main() {
    float n, res = 0;
    cin >>n;
    for(int i = 1; i <= n; i++) {
        res += (1/fok(i)) + (i/fok(n-i));
    }
    cout << res;
    return 0;
}