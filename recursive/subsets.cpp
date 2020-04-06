#include <iostream>
#include <set>
using namespace std;
int fib[100];
set<string>st;
int cnt;
void gen(string in, string out) {
	if (in.length() == 0) {
		cout << out << endl;
		st.insert(out);
		cnt++;
		return;
	}
	gen(in.substr(1), out);
	gen(in.substr(1), out + in[0]);
}
int main() {
	string in;
	cin >> in;
	gen(in, "");
	cout << st.size() << endl;
	cout << cnt << endl;


}
