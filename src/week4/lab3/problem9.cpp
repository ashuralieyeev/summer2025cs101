#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr[n];
    double* p = arr;
    for (int i = 0; i < n; i++) {
        cin >>*(p+i);
    }
    for (int i = n-1; i >=0; i--){
        cout << *(p+i) << endl;

    }


    return 0;
}
