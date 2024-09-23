#include <iostream>

using namespace std;

int main() {
    long int input;
    input<3000000000;
    input>-3000000000;
    cin>>input;
    if((input>-2147483647)&&(input<2147483647)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}


