#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> res1;
    int a, res = 0;
    cin >> a;
    while (a != 0) {
        res1.push_back(a % 10);
        a /= 10;
    }
    for (int i = 0; i < res1.size(); i++) {
        res += res1[i];
    }
    cout << res;
    return 0;
}