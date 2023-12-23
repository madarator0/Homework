#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    string list = "0123456789abcdefghihklnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@#$&_-+()/%*:;";
    int s = list.length(); 
    string q;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        q += list[rand()%s];
    }
    cout << q << endl;
    return 0;
}
