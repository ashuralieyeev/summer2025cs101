#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n = 2;

    while (count < 50){
        int reversed = 0;
        int temp = n;

    while (temp > 0){
         reversed = reversed * 10 + (temp % 10);
         temp /= 10;
            }
        if (n % 2 == 0 && n == reversed){
            cout << n << " ";
            count++;
            if (count % 5 == 0)
            cout << endl;
            }

        n++;
    }

    return 0;
}
