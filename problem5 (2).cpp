#include <iostream>
using namespace std;
int main() {
    float a,b;
    char sign;
    cin>>a>>sign>>b;
    if (sign=='+') cout<<a+b;
    else if (sign=='-') cout<<a-b;
    else if (sign=='*') cout<<a*b;
    else if (sign=='/') cout<<a/b;


    return 0;
}