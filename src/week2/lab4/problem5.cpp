#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int r;
    int sum = 0;
    while(n>0) {
        r=n%10;
        sum+=r;
        n=n/10;
    }
    cout<<sum<<endl;


    return 0;
}