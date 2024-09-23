#include <iostream>

using namespace std;

int main() {
    cout<<"enter your sex"<<endl;
    cout<<"if you are male enter M, if you are female enter F"<<endl;
    char sex;
    cin>>sex;
    cout<<"enter your height in meters"<<endl;
    float height;
    cin>>height;

    if(sex=='M')
    {


        if (height<1.70){
            cout<<"Short";
        }
        else if((height>=1.70)&&(height<=1.85)){
            cout<<"Normal";
        }
        else if(height>1.85){
            cout<<"Tall";
        }



    } else
    {

        if (height<1.60) {
            cout<<"Short";
        }
        else if((height>=1.60)&&(height<=1.75)){
            cout<<"Normal";
        }
        else if(height>1.75){
            cout<<"Tall";
        }

    }

    return 0;
}