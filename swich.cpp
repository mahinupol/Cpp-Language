#include<iostream>
using namespace std;
int main(){
    int digit;

    cout<<"Enter a digit: ";
    cin>>digit;

    switch (digit)
    {
    case 0:
        cout<<"you input 0"<<endl;
        break;
    case 1:
        cout<<"you input 1"<<endl;
        break;
    case 2:
        cout<<"you input 2"<<endl;
        break;
    case 3:
        cout<<"you input 3"<<endl;
        break;
    case 4:
        cout<<"you input 4"<<endl;
        break;
    case 5:
        cout<<"you input 5"<<endl;
        break;
    case 6:
        cout<<"you input 6"<<endl;
        break;
    default:
    cout<<"nothing"<<endl;
       
    }

    return 0;
}