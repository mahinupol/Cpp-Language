#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any Integer number: "<<endl;
    cin>>num;

    if(num>0)
    cout<<"positive"<<endl;
   else if(num<0)
    cout<<"negative"<<endl;
    else
    cout<<"Zero"<<endl;


    return 0;
}