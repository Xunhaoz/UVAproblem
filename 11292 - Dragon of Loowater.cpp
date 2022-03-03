#include<bits/stdc++.h>
using namespace std;

vector<int> headHeight;
vector<int> knightHeight;
int needHired;

void init();

int main(){

    int m, n;
    while(1){
        init();
        cin >> n >> m;
        if(!m && !n) break;

        int tmp;
        while(n--){
            cin >> tmp;
            headHeight.push_back(tmp);
        }
        while(m--){
            cin >> tmp;
            knightHeight.push_back(tmp);
        }

        sort(headHeight.begin(), headHeight.end());
        sort(knightHeight.begin(), knightHeight.end());

        int curr = 0;

        for(auto i: knightHeight){
            if(i >= headHeight[curr]){
                needHired += i;
                if(++curr == headHeight.size()) break;
            }
        }

        if(curr < headHeight.size())
            cout << "Loowater is doomed!" << endl;

        else{
            cout << needHired << endl;
        }

    }

    return 0;
}

void init(){
    needHired = 0;
    headHeight.clear();
    knightHeight.clear();
}

/*
2 3
5
4
7
8
4
2 1
5
5
10
0 0
*/
