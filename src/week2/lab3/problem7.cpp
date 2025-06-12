#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int max;
    cin>>max;
    int t;
    for(int i=2;i<=n;i++) {
        cin>>t;
        if(t>max) {
            max=t;
        }
    }
    cout<<max<<endl;

    return 0;
}