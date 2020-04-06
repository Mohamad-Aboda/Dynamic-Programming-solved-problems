#include <iostream>
#include <set>
using namespace std;


int low[50], high[50];
int main() {
	for (int i = 1; i < 50; ++i) {
		low[i] = (i + 1) + low[i / 2] + low[i - 1 - (i / 2)];
		high[i] = high[i - 1] + i + 1;
	}
	int t; cin >> t;
	while (t--) {
		int n, len; cin >> n >> len;

		if (len < low[n])puts("-1");
		else if (len <= high[n])puts("0");
		else printf("%d\n", len - high[n]);
	}
}
