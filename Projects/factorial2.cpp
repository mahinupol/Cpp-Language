#include<iostream>
using namespace std;
int main(){
int i,n,fact=1;
cout<<"Enter a Number:"<<endl;
cin>>n;
for(i=1;i<=n;i++){
    fact=fact*i;
}
 cout<<fact<<endl;
return 0;
}