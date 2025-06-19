#include <iostream>
using namespace std;
int int_mult(int a, int b) {
    if (b==0) {
        return 0;
    }
    if (b>0) {
        return a+int_mult(a,b-1);
    }else {
        return -a+int_mult(a,b+1);
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    cout<<int_mult(a,b)<<endl;

    return 0;
}