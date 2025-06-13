#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int r;
    int sum = 0;
    int reversed_num = 0;
    while(n>0) {
        r=n%10;
        n=n/10;
        reversed_num=reversed_num*10+r;
    }
    cout<<sum<<endl;



    return 0;
}