#include<iostream>
using namespace std;
int main(){
int i,n,mul;
cout<<"Enter Multiplicator Number:"<<endl;
cin>>n;
cout<<"Multiplicator of "<<n<<endl;
for(i=1;i<=10;i++){
    mul=n*i;
    cout<<mul<<endl;
}
return 0;
}