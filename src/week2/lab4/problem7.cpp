#include <iostream>
using namespace std;
int main () {
srand (time(0));
    int x;
    int even_count=0, odd_count=0;
    for(int i=1;i<=1000;i++) {
        x=rand()%1000+1;
        if(x%2==0) {
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    cout<<"even count "<<even_count<<endl;
    cout<<"odd count "<<odd_count<<endl;





    return 0;
}