#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any later:"<<endl;
    cin >> ch;
    ch = tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        cout<<"Vowel"<<endl;
        break;
        default:
        cout<<"Consonant"<<endl;
    }


    return 0;
}