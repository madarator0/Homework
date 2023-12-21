#include <iostream>
#include<vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> res1;
    int a, res = 0, co = 0;
    cin >> a;
    while (a != 0) {
        res1.push_back(a % 10);
        a /= 10;
        co++;
    }
    for (int i = 0; i < res1.size(); i++) {
        res += pow(res1[i],co);
    }
    cout << res;
    return 0;
}