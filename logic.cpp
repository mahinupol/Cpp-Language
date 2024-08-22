#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< "Enter a character: "<<endl;
    cin>>ch;
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"This is a Vowel."<<endl;
    }else{
        cout<<"this is Consonant."<<endl;
    }
    return 0;
}