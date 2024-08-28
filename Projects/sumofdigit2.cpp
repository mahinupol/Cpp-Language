#include<iostream>
using namespace std;
int main(){
    int n,a,rem,sum=0;
    cout<<"Enter a number: "; 
    cin >> n;
    while (n!=0)
    {
        a=n/10;
        rem=n%10;
        sum+=rem;
        n=a;
    }
    cout<<"the reminder sum:"<<sum<<endl;

    return 0;
}