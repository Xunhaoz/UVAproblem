#include<bits/stdc++.h>
using namespace std;

const int maxn = 10000 + 5;
int order[maxn];
const string direct[] = {"L", "Turning", "R"};
struct ant{
    int id, pos, dir;
}before[maxn], after[maxn];

bool cmp(ant A, ant B){return A.pos < B.pos;}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int L, T, n, testcase;
    cin >> testcase;
    for(int i=1;i<=testcase;i++){
        cin >> L >> T >> n;

        for(int j=0;j<n;j++){
            int temPos, temDir;
            char rawDir;
            cin >> temPos >> rawDir;
            temDir = (rawDir == 'L' ? -1 : 1);
            before[j] = (ant) {j, temPos, temDir};
            after[j] = (ant) {0, temPos + T*temDir, temDir};
        }

        sort(before, before+n, cmp);
        for(int j=0;j<n;j++){
            order[before[j].id] = j;
        }

        sort(after, after+n, cmp);
        for(int j=0;j<n;j++){
            if(after[j].pos == after[j+1].pos) after[j].dir = after[j+1].dir = 0;
        }
/*
        cout << "Before:\n";
        for(int j=0;j<n;j++){
            cout << before[j].pos << " " << before[j].dir << '\n';
        }

        cout << "After:\n";
        for(int j=0;j<n;j++){
            cout << after[j].pos << " " << after[j].dir << '\n';
        }
*/
        cout << "Case #" << i << ":\n";
        for(int j=0;j<n;j++){
            int a = order[j];
            if(after[a].pos > L || after[a].pos < 0) cout << "Fell off\n";
            else{
                cout << after[a].pos << ' ' << direct[after[a].dir+1] << '\n';
            }
        }
        cout << '\n';
    }

    return 0;
}
