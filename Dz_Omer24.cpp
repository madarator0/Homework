#include <iostream>

using namespace std;

int main() {
    int g = 0;
    for (int i = 0; i < 999999; i++){
        int chot = 0, nochot = 0;
        int a = i, n;
        while (a != 0) {
            n = a % 10;
            if (n % 2 == 0) {
                chot += n;
            } else {
                nochot += n;
            }
            a /= 10;
        }
        if (chot == nochot) {
            g++;
        }
    }
    cout << g;
    return 0;
}