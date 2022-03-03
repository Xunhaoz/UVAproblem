#include<iostream>
using namespace std;
int knowDays(int length);
int main(){
    int length = 3000;
    cout << knowDays(length);

    return 0;
}
int knowDays(int length){
    for(int i=0;;i++){
        length = length >> 1;

        if(length < 5) return i;
    }
}
