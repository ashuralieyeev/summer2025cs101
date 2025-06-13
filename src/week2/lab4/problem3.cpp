#include <iostream>
using namespace std;
int main() {
    float n;
    cin>>n;
    float sum=0;
    for(float i=1;i<=n;i++) {
        sum=sum+1/i;
    }
    cout<<sum;



    return 0;
}