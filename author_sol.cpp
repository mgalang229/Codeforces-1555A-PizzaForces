#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n;
		cin >> n;
		// view the image in this repository for better understanding
		cout << max(6LL, n + 1) / 2 * 5 << '\n';
	}
	return 0;
}
