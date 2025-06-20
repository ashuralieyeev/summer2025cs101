#include <iostream>
using namespace std;

bool strictlyequal(const int list1[], const int list2[], size_t n) {
    for (int i = 0; i < n; i++) {
        if (list1[i] != list2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >>arr2[i];
    }
    cout << strictlyequal(arr1, arr2, n) << endl;





    return 0;
}