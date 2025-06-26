#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    int century;
    if (year % 100 == 0) {
        century = year / 100;
        cout << century << endl;
    }
    else {
    century = (year / 100) + 1;
    cout << century << endl;
    }

    return 0;
}
