#include<bits/stdc++.h>
using namespace std;
struct job{
    int j, b;
};
typedef struct job jobs;
vector<jobs> v;

bool cmp(jobs A, jobs B){
    return A.j > B.j;
}

int main(){
    int n, j, b, testCase = 0;
    while(scanf("%d", &n) == 1 && n){
        v.clear();

        while(n--){
            scanf("%d%d", &b, &j);
            v.push_back((jobs){j,b});
        }
        sort(v.begin(), v.end(), cmp);

        j = 0, b = 0;
        for(auto i:v){
            j += i.b;
            if(j+i.j > b) b = j+i.j;
        }
        cout << "Case " << ++testCase << ": " << b << endl;
    }
    return 0;
}
