#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> res;
    char s[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int n, m;

    cin >> n >> m;

    while (n > 0) {
        res.push_back(s[n % m]);
        n /= m;
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i];
    }

    cout << endl;

    return 0;
}