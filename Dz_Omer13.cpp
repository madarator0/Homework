#include <iostream>
using namespace std;

int main() {
    long long a = 1;
    int co = 1;
    while (a % 1991 != 0) {
        a = a * 10 + 1;
        co++;
    }
    cout << co;
    return 0;
}