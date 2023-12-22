#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));
    int co = 0;
    for (int i = 0; i < 10; i++) {
        int a = rand() % 7;
        int b = rand() % 7;
        if (a == b) {
            co++;
        }
    }
    cout << co;
    return 0;
}