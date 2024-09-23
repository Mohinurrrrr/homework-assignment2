#include <iostream>

using namespace std;

int main() {
    cout<<"enter 1 if it is winter, otherwise o"<<endl;
    int winter;
    cin>>winter;
    cout<<"enter 1 if it is raining, otherwise o"<<endl;
    int rain;
    cin>>rain;
    if(winter==1){
        cout<<"Bus";
    } else if(rain==1){
        cout<<"Walk";
    }else{
        cout<<"Bike";
    }

    return 0;
}