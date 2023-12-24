#include <iostream>

using namespace std;

int main() {
    string n;
    string a1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string a1X[] = {"", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string a10[] = {"", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string a100[] = {"", "one hundred", "two hundred", "three hundred", "four hundred", "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"};

    int m;
    cin >> m;

    if (m == 0) {
        cout << "zero" << endl;
        return 0;
    }

    while (m > 0) {
        if (m >= 100) {
            n += a100[m / 100] + " ";
            m %= 100;
        } else if (m >= 20) {
            n += a10[m / 10] + " ";
            m %= 10;
        } else if (m >= 10) {
            n += a1X[m % 10] + " ";
            break;
        } else {
            n += a1[m] + " ";
            break;
        }
    }

    cout << n;

    return 0;
}
