#include <iostream>
using namespace std;
int main() {
    int num;
    while (true) {
        cin >> num;
        if (num<0) {
            cout<<num<<" is negative number";
            break;
        }
        cout<<num<<" is positive number";
    }


    return 0;
}