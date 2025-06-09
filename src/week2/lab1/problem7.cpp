#include <iostream>
using namespace std;
int main(){
int x;
    cout<<"enter 3 digit number"<<endl;
    cin>>x;
    int a= x/100;
    int b = x%10;
    if (a==b) {
        cout<<x<<"  is a palindrome"<<endl;
    }
    else {
        cout<<x<<"  is not a palindrome"<<endl;
    }
    return 0;
}