#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
   for (int*p = arr; p < arr+n; p++) {
       cin >> *p;
   }
    int count = 0;
    for (int*p = arr; p < arr+n; p++) {
        if (*p % 2) {
            count++;
        }

    }
    cout << count << endl;
}

