#include<bits/stdc++.h>
#define testcaseMax 1000005
using namespace std;
long long int moneyOrignal[testcaseMax], C[testcaseMax];
long long int totall, average;
int main(){
    int testcase;
    while(scanf("%d", &testcase) == 1){

        totall = 0;
        for(int i=0;i<testcase;++i){
            scanf("%lld", &moneyOrignal[i]);
            totall += moneyOrignal[i];
        }
        average = totall/testcase;

        for(int i=0;i<testcase;++i){
            if(i == 0){
                C[i] = 0;
                continue;
            }
            C[i] = C[i-1] + moneyOrignal[i-1] - average;
        }

        sort(C, C+testcase);
        long long int median = C[testcase/2], answer = 0;

        for(int i=0;i<testcase;i++){
            answer += abs(median - C[i]);
        }

        printf("%lld\n", answer);
    }
    return 0;
}
