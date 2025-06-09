#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int case1=a>b;
    int case2=a<b;
    int case3=a==b;
    cout<<"is a<b "<<case1<<endl;
    cout<<"is a>b "<<case2<<endl;
    cout<<"is a==b "<<case3<<endl;
    return 0;
}
