#include <iostream>
using namespace std;

int main() {
    int w;
    cout<<"Enter the weight"<<endl;
    cin>>w;
    switch (w<=0) {
        case true:
            cout<<"Invalid input"<<endl;
            break;
        case false:
    switch (w) {
        case 1:
        case 2:
            cout<<"Your shipping cost is "<<3500*w<<endl;
            break;
        case 3:
            cout<<"Your shipping cost is "<<5500*w<<endl;
            break;
        case 4:
        case 5:
            cout<<"Your shipping cost is "<<8500*w<<endl;
            break;
        case 6:
        case 7:
        case 8:
            cout<<"Your shipping cost is "<<10500*w<<endl;
            break;
            default:
            cout<<"Cannot be shipped"<<endl;

    }
    }

    return 0;
}