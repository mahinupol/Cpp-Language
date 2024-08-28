#include<iostream>
using namespace std;
int main(){
int n;
for ( n = 0; n <= 100; n++)
{
    if (n!=2){
        if (n%2==0 || n%3==0|| n==0|| n==1)
    {
        cout<<n<<" is not a prime number "<<endl;
    }
    else
    cout<<n<<" is a prime number "<<endl;
    }else
        cout<<n<<" is a prime number "<<endl;

  
}

    return 0;  
}