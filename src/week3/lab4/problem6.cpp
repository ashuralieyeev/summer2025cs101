#include <iostream>
using namespace std;
    void char_type(char arr[], int n) {
       int up=0,low=0,d=0,s=0;
        for (int i = n-1; i >= 0; i--) {
            if (arr[i] >=65&& arr[i]<=90) {
                up++;
            }
            else if (arr[i]>=97 && arr[i]<=122) {
                low++;
            }
            else if (arr[i]>=48 && arr[i]<=57) {
                d++;
            }
            else {
                s++;
            }
        }
    cout << up << endl;
        cout << low << endl;
        cout << d << endl;
        cout << s << endl;

    }
int main() {
        int n;
        cin >> n;
        char arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
     char_type(arr, n);









    return 0;
}