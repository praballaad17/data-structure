#include <bits/stdc++.h>

using namespace std;
// a - 4 max
// c - 3 sec
// b - 3
//end

// 1 2 3 4 5 6  


bool compare(pair<char,int>& p1, pair<char,int>& p2) {
	if( p1.second == p2.second) {
		return p1.second > p2.first;
	}
	return p1.second < p2.second;
}

int main() {
	string s = "aabacabcc";
	char c = 'c';
	int m {0};

	
	// int cnt {0};
	map<char,int> mp;


	for(int i=0;i<s.length();i++) {
		if( mp.find(s[i]) != mp.end() ) {
			mp[s[i]]++;
		} else {
			mp[s[i]] == 1;
		}
	}

	for(auto it = mp.begin(); it!=mp.end();it++) {
		cout<<it->first<<" "<<it->second<<endl;
	}

	// auto it = mp.begin();
	// sort(mp.begin(), mp.end());
	auto last = mp.end();
	// last  = last - 2;
	cout<<last->first<<last->second<<endl;
	
}
