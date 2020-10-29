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
#define inf 1e10

int main() {
	int n, k; cin >> n >> k;
	vector<int>arr(n, 0), dp(n, inf);
	rep(i, n)cin >> arr[i];

	dp[0] = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j <= k + i; ++j) {
			if (j < n) {
				dp[j] = min(dp[j], dp[i] + abs(arr[i] - arr[j]));
			}
		}
	}
	cout <<  dp[n - 1];
	return 0;
}
