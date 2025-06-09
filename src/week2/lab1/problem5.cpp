#include <iostream>
using namespace std;
int main(){
int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c&&b+c>a&&a+c>b) {
if (a==b&&b==c) {
    cout<<"Equilateral"<<endl;
}
        else if (a==b||b==c||a==c) {
            cout<<"Isosceles"<<endl;
        }
        else{
            cout<<"Scalene"<<endl;
        }
    } else {
        cout<<"Not a triangle"<<endl;
    }

    return 0;
}