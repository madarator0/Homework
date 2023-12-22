#include <iostream>

using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int tP = N;

    for (int i = 0; i < K; ++i) {
        int p, m;
        cin >> p >> m;

        tP = tP - m + p;
    }
    cout << tP << endl;

    return 0;
}