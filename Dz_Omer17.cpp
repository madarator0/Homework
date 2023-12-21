#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> res1;
    int a;
    bool s;
    for (int i = 10; i<1000; i++) {
        a = i;
        while (a != 0) {
            res1.push_back(a % 10);
            a /= 10;
        }
        s = true;
        for (int iu = 0; iu < res1.size()-1; iu++) {
            for (int iv = iu+1; iv < res1.size(); iv++) {
                if (res1[iu] == res1[iv]) {
                    s = false;
                    break;
                }
            }
            if (!s) {
                break;
            }
        }
        if (s) {
            cout << i << endl;
        }
        res1.clear();
    }
    return 0;
}