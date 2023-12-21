#include <iostream>
using namespace std;

int main() {
    int a, b;
    bool p, h;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        p = false;
        h = false;
        int co = 0;
        for (int s = 1; s <= i; s++) {
            if (i % s == 0) {
            co++;
        }
    }
        if (co == 2) {
            p = true;
        }
        int rev = 0;
        int ori = i;
        while (ori > 0) {
            rev = rev * 10 + ori % 10;
            ori /= 10;
        }
        if (i == rev) {
            h = true;
        }
        if (p && h) {
            cout << i << " ";
        }
   }
    return 0;
}