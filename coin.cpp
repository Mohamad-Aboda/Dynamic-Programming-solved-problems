#include <bits/stdc++.h>
using namespace std;

const int N = 1e3;
int A[N], n, S;
int dp[N][N];

int solve(int pos, int sum) {
    if(pos == n)return sum == 0;
    if(sum < 0)return 0;
    int &ret = dp[pos][sum];
    if(ret != -1)return ret;
    ret =0;
 	
	ret = solve(pos, sum -A[pos]) + solve(pos+1, sum);
	return ret;
}

int main() {
	
	
	cin >> n >> S;
	for(int i=0; i<n; i++) cin >> A[i];	
	memset(dp, -1, sizeof dp);
	cout << solve(0, S) << endl;
	return 0;
}
