#include <iostream>
using namespace std;

int indexoflargestnumber(double arr[], int n) {
   int max_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

int main() {
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << indexoflargestnumber(arr, n) << endl;

    return 0;
}