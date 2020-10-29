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

int a[100007], b[100007], c[100007];
int dp[100007][3];
int main() {
	int n; cin >> n;
	rep(i, n) {
		cin >> a[i] >> b[i] >> c[i];
	}
	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];

	for (int i = 1; i < n; ++i) {
		dp[i][0] = a[i] + max(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = b[i] + max(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = c[i] + max(dp[i - 1][0], dp[i - 1][1]);
	}
	cout << max({ dp[n - 1][0] , dp[n - 1][1], dp[n - 1][2] }) << endl;
	return 0;
}
