#include <iostream>
#include "cmath"
using namespace std;

int main(){
float a,b,c;
    cin>>a>>b>>c;
 float d = b*b-4*a*c;
   if (d<0) {
       cout<<"No solution\n";
   }
    else if (d==0) {
        float x=-b/(2*a);
        cout<<"x1=x2"<<x<<endl;
    }
    else {
        float x1, x2;
        x1=(-b+sqrt(d))/(2*a);
        x1=(-b-sqrt(d))/(2*a);
        cout<<"x1= "<<x1<<"   x2="<<x2<<endl;
    }

    return 0;
}