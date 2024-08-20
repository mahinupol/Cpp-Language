#include<iostream>
using namespace std;
int main(){
    int marks;

    cout << "enter your marks: "<<endl;
    cin >> marks;
    if (marks<0){
        cout << "Invalit Marks"<<endl;
    }
    else if (marks>=80){
        cout << "A+"<<endl;
    }
    else if (marks>=70){
        cout << "A"<<endl;
    }
    else if (marks>=60){
        cout << "A-"<<endl;
    }
    else if (marks>=50){
        cout << "B"<<endl;
    }
    else if (marks>=40){
        cout << "C"<<endl;
    }
    else if (marks>=33){
        cout << "33"<<endl;
    }
    else if (marks>=33){
        cout << "33"<<endl;
    }
    else if (marks<33){
        cout << "Fail"<<endl;
        cout << "Try next time"<<endl;
    }
    
    


    return 0;
}