#include<iostream>
using namespace std;
int main(){
    int i = 0, sum = 0;
    do{
        sum += ++i;
    }while(sum < 1000);
    cout << i;
    return 0;
}
