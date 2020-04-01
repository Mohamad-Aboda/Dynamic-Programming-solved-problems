// problem link >>         https://www.spoj.com/problems/BYTESM2/
#include <bits/stdc++.h>
using namespace std;
int arr[107][107];
int dp[107][107];
int r, c;
int main(){
	int t;cin >> t;
	while(t--){
		cin >> r >> c;
		for(int i = 0; i < r; i++)
			for(int j = 0; j < c; j++)
				cin >> arr[i][j];
		for(int i = 0; i < c; i++)
			dp[0][i] = arr[0][i];
		for(int i = 1; i < r; i++){
			for(int j = 0; j < c; j++){
				int x, y, z;
				x = -1, y = -1, z = -1;
				// center cell is valid 
				x = dp[i-1][j];
				// left cell is valid
				if(j > 0) y = dp[i-1][j-1];
				// right cell is valid
				if(j < c-1) z = dp[i-1][j+1];
				dp[i][j] = max({a, b, c}) + arr[i][j];
			}
		}
		int ans = -1;
		for(int 0; i < c; i++){
			ans = max(ans, dp[r-1][i];
		}
		cout << ans << endl;
	}
}

