#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int sum = 0;
    while (i <= 10) {
        cout << i << endl;
        sum += i;
        i++;
    }

    cout << sum << endl;
    return 0;
}