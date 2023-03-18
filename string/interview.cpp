#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, string s, vector<int> d) {
	int maxInd = 0;
	vector<int> ans;
	for(int i=0; i<d.size(); i++) {
		s[d[i]] = '?';
		if(d[i] > maxInd) {
			maxInd = d[i];
		}

		map<char, int> mp;
		for (int k = maxInd ; k < s.length() ; k++) {
			mp[s[k]]++;
		}
		// int count =0;
		// for(auto str : mp) {
		// 	if( str.second == 1) {
		// 		count++;
		// 	}
		// }

		ans.push_back(mp.size());
	}

	return ans;
}

int main () {
	// string s = "abccef";
	// vector<int> d = {1, 3, 4, 5, 2, 6};
	string s = "fhababaaa";
	vector<int> d = {4,9,8,7,2,1,6,5,3};

	vector<int> ans;
	ans = solve(s.length(), s, d);
	for(int i = 0; i< ans.size(); i++) {
		cout<<ans[i]<<" ";
	}
}