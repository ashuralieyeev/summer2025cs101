#include <iostream>
using namespace std;

int main() {
    double a,b;
    cin>>a>>b;
    cout<<a<<" , "<<b<<endl;
    double* p1 = &a;
    double* p2 = &b;
    double temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout<<a<<" , "<<b<<endl;



    return 0;
}
