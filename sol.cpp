#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> s(n);
		for (int i = 0; i < n; i++) {
			cin >> s[i];
		}
		// sort the array in non-decreasing order
		sort(s.begin(), s.end());
		int minimum_difference = INT_MAX;
		for (int i = 0; i < n - 1; i++) {
			// find the minimum difference between two adjacent elements
			minimum_difference = min(minimum_difference, s[i + 1] - s[i]);
		}
		cout << minimum_difference << '\n';
	}
	return 0;
}
