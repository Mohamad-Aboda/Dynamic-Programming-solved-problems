#include<iostream>
#include<stack>
#include<string>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#include <math.h>
#define fast(); ios_base::sync_with_stdio(0);cin.tie(0);
#define rep(i, n) for(int i= 0; i < (n); ++i)
#define ll long long
using namespace std;


int main() {
    int n; cin >> n;
    vector<int>arr(n, 0), dp(n, 0);
    rep(i, n)cin >> arr[i];
    dp[1] = abs(arr[1] - arr[0]);
    for (int i = 2; i < n; ++i) {
        dp[i] = min(abs(arr[i] - arr[i - 1]) + dp[i - 1], abs(arr[i] - arr[i - 2]) + dp[i - 2]);
    }
    cout << dp[n - 1] << endl;
    return 0;

	return 0;
}
