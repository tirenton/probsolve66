#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> lst(n + 1, 0);
    vector<int> dp(n + 1, 0);
    
    for (int i = 1; i <= n; i++){
        cin >> lst[i];
        if (i>2) dp[i] = max(dp[i-3]+lst[i],max(dp[i-1],dp[i-2]));
    }
    
    cout << dp[n] << endl;
    return 0;
}
