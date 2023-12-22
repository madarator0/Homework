#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int m[11] = {0};
    for (int i = 0; i < 10000; i++) {
        int d1 = 1 + rand() % 6;
        int d2 = 1 + rand() % 6;
        int roll = d1 + d2;
        m[roll - 2]++;
    }
    for (int i = 0; i < 11; i++) {
        cout << i + 2 << ": " << m[i] << endl;
    }
    return 0;
}