//input 123 output 1+2+3=6

#include<iostream>
using namespace std;
int main(){
int n,n1,sum,n2,n3,n4,n5;
cin>>n;
n1=n%10;
n2=n/10;
n3=n2%10;
n4=n2/10;
n5=n4%10;
sum=n1+n3+n5;
cout<<sum<<endl;
    return 0;
}