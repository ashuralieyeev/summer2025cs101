#include <iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout<< &n<< endl;
    double* p = &n;
    cout<< &p<< endl;
    cout <<*p<< endl;

    return 0;
}
