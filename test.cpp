#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=2, y=1, z=0;
    if((x=y) == 3){
        if((x=z) == 3)
            z = 1;
        else z = 2;

    }
    cout << z;
    return 0;
}
