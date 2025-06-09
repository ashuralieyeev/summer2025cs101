#include <iostream>
using namespace std;
int main(){
    char x;
    cin>>x;
   if (x>='A'&&x<='Z') {
       cout<<"Uppercase"<<endl;
   }
    else if (x>='a'&&x<='z') {
        cout<<"Lovercase"<<endl;
    }
    else {
        cout<<"not a character"<<endl;
    }
    return 0;
}