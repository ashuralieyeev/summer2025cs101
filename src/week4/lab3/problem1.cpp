#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
    cin >> arr[i];
    if (arr[i] >= 0) {
   cout << 1 << endl;
    return 0;
   }
    }
    cout << 0 << endl;
    return 0;
}
