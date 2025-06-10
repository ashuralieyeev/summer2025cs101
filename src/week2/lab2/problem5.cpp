#include <iostream>
#include <cstdlib>
#include  <time.h>
using namespace std;

int main() {
    srand(time(0));
    int r=1+rand()%100;
    string guess;
    cin>>guess;
    if (r%2==0 && guess=="even") {
        cout<<"you won!, the number was "<<r<<endl;
    }else if (r%2==1 && guess=="odd") {
        cout<<"you win!, the number was "<<r<<endl;
    } else {
        cout<<"you lost!, the number was "<<r<<endl;
    }


    return 0;

}