#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    float n, m, max, min, res = 0;
    m = 1 + rand() % 100;
    cout << m << " ";
    max = m;
    min = m;
    cin >> n;
    for (int i = 1 ; i < n ; i++) {
        m = 1 + rand() % 100;
        cout << m << " ";
        if (m > max) {
            max = m;
        }
        if (m < min) {
            min = m;
        }
        res += m;
    }
    cout << endl;
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
    cout << "average = " << res / n << endl;
    return 0;
}