#include <iostream>
#include <vector>
using namespace std;

int maxx2(vector<int> lst,int x){
    int max = -100010;
    for (int i=0;i<x;i++){
        if (i>4)return max;
        if (max < lst[x-i-1])max = lst[x-i-1];
    }
    return max;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=0;
    cin >> n;
    vector<int> lst(n+2, 0),lst2(n+2, 0),dp(n+2, 0);
    for (int i=1;i<n+1;i++){
        cin >> lst[i];
    }
    lst[0]=0,dp[0]=0,dp[1]=lst[1],dp[2]=lst[2],dp[3]=lst[3],dp[4]=lst[4];
    for (int i=1;i<n+1;i++){
        cin >> lst2[i];
        if (lst2[i]==1){
            count=count + lst[i];
            dp[i]=maxx2(dp, i);
        }
        else dp[i]=maxx2(dp,i)+lst[i];;
    }
    cout << maxx2(dp,n+1)+count << "\n";
    return 0;
}
