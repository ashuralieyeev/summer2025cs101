#include <iostream>
using namespace std;

int main() {
    char light;
    cout<<"Enter a character"<<endl;
    cin>>light;
    switch (light) {
        case 'g':
            cout<<"Go"<<endl;
            break;
        case 'y':
            cout<<"Get ready"<<endl;
            break;
        case 'r':
            cout<<"Stop"<<endl;
            break;
        default:
            cout<<"No such lite"<<endl;

    }

    return 0;
}