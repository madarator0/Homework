#include <iostream>
#include <cmath>
using namespace std;

int S_square (int x) {
    return x*x;
}

int S_rectangle (int x, int y) {
    return x*y;
}

float S_triangle (int x, int y, int z) {
    int p = (x+y+z)/2;
    return sqrt(p*(p-x)*(p-y)*(p-z));
}

int main() {
    int n;
    cout << "1. square\n";
    cout << "2. rectangle\n";
    cout << "3. triangle\n";
    cout << "Choose shape: ";
    cin >> n;
    switch (n) {
        case 1: {
            int x;
            cout << "Enter length: ";
            cin >> x;
            cout << "Square: " << S_square(x);
            break;
        }
        case 2: {
            int x, y;
            cout << "Enter length: ";
            cin >> x;
            cout << "Enter width: ";
            cin >> y;
            cout << "Rectangle: " << S_rectangle(x, y);
            break;
        }
        case 3: {
            int x, y, z;
            cout << "Enter length: ";
            cin >> x;
            cout << "Enter width: ";
            cin >> y;
            cout << "Enter height: ";
            cin >> z;
            cout << "Triangle: " << S_triangle(x, y, z);
            break;
        }
        default: {
            cout << "Error!";
            break;
        }
    }
    return 0;
}