#include<iostream>
using namespace std;
int main(){
    int num1,num2,n1,n2,rem,lcm;
    cout<<"Enter Two numbers to find GCD and LCM: "<<endl;
    cin>>num1>>num2;   
    n1 =num1;
    n2 = num2;
    while (n2!=0){
    {
        rem =n1%n2;
        n1 = n2;
        n2 = rem;
    }  
cout<<"GCD: "<<n2<<endl;
    lcm=(num1*num2)/n2;
    cout<<"LCM: "<<lcm<<endl;

    return 0;
}
}