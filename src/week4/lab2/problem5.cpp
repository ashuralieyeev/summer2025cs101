#include <iostream>
using namespace std;

void sumArrays(const double* arr1, const double* arr2, double* sum, int size){
    for (int i = 0; i < size; i++){
    sum[i] = arr1[i] + arr2[i];
             }
    }

int main() {
   int n;
   cin >> n;
    double arr1[n], arr2[n], sum[n];

    for (int i = 0; i < n; i++){
    cin >> arr1[i];
    }
    for (int i = 0; i < n; i++){
   cin >> arr2[i];
    }

sumArrays(arr1, arr2, sum, n);
  for (int i = 0; i < n; i++){
  cout << static_cast<int>(sum[i]) << " ";
   }
    cout << endl;

    return 0;
 }
