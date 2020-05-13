#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6;
typedef long long int ll;
map<ll, ll>mp;
ll solve(ll n){
	if(n < 12)return n;
	if(mp.count(n))
		return mp[n];
	return mp[n] = solve(n / 2) + solve(n / 3) + solve(n / 4);
}
int main(){
	ll n;
	while(cin >> n){
		cout << solve(n) << endl;
	}
	return 0;
}
