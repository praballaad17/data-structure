#include<bits/stdc++.h>
using namespace std;

int solve(string s, int i, int j, bool isTrue) {
	if(i > j){
		// if(isTrue == false)
		// 	return 1;
		// else
		// 	return 0;
        return 0;
	}
	if(i == j) {
		if(isTrue == true) {
			if(s[i] == 't')
				return 1;
			else 
				return 0;
	}
		else {
			if(s[i] == 'f')
				return 1;
			else return 0;
		}
	}

	int ans =0;
	for(int k=i+1; k<= j-1; k=k+2) {
		int lt = solve(s, i, k-1, true);
		int lf = solve(s, i, k-1, false);
		int rt = solve(s, k+1, j, true);
		int rf = solve(s, k+1, j, false);

		if(s[k] == '&') {
			if(isTrue == true) {
				ans += lt*rt;
			} else {
				ans += lt*rf + lf*rt + lf*rf;
			}
		}

		if(s[k] == '|') {
			if(isTrue == false) {
				ans += lf*rf;
			} else {
				ans += lt*rf + lf*rt + lt*rt;
			}
		}

		if(s[k] == '^') {
			if(isTrue == true) {
				ans += lf*rt + lt*rf;
			} else {
				ans += lt*rt + lf*rf;
			}
		}
	}
    cout<<i<<" j:"<<j<<" ans "<<ans<<endl;
	return ans;
}

int main() {
	string st = "t^f&t";
	cout<<solve(st,0, st.length()-1, true);
	return 0;
}