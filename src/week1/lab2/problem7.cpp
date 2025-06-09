#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int sum1=a+b;
    int sum2=c+d;
    bool case1=sum1>sum2;
    bool case2=sum1<sum2;
    bool case3=sum1==sum2;
    cout<<"sum of first pair is "<<sum1<<endl;
    cout<<"sum of second pair is "<<sum2<<endl;
    cout<<"Is  sum1>sum2? "<<case1<<endl;
    cout<<"Is  sum1>sum2? "<<case2<<endl;
    cout<<"Is  sum1==sum2? "<<case3<<endl;


    return 0;
}
