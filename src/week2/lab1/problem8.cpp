#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter 4 digit number"<<endl;
    cin>>x;
    int a,b,c,d;
    a=x%10;
    x/=10;
    b=x%10;
    x/=10;
    c=x%10;
    x/=10;
    d=x%10;
    int odd=4;
    int even=0;
    if (a % 2 == 0)
        even++; else odd++;
    if (b % 2 == 0)
        even++; else odd++;
    if (c % 2 == 0)
        even++; else odd++;
    if (d % 2 == 0)
        even++; else odd++;

    if (even > odd) {
        cout << "More even digits" << endl;
       } else if (odd > even) {
        cout << "More odd digits" << endl;
       } else {
        cout << "Equal even and odd digits" << endl;
    }


    return 0;
}