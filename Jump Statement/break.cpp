//It break the current Flow of the program at specified Condition
//in case of inner loop, it breaks only inner loop.

#include <iostream>
using namespace std;
int main() {
    for(int i = 0; i <=100; i+=2) {

    if(i == 10){
       break;
    }
    cout << i << endl;
    }

    return 0;
}