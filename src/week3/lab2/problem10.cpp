#include <iostream>
using namespace std;

    int factotial(int n) {

        if(n==0) {
            return 1;
        }
      return n*factotial(n-1);

    }

int main() {
    cout<<factotial(10);



    return 0;
}