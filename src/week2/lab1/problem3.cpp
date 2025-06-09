#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number"<<endl;
    cin>>x;
    if (x%3==0&&x%5==0) {
        cout<<"FizzBuzz\n";
    }
    else if (x%5==0) {
        cout<<"Buzz\n";
    }
    else if (x%3==0) {
        cout<<"Fizz\n";
    }
    else {
        cout<<"Not divisible by 3 or 5"<<endl;
    }

    return 0;
}