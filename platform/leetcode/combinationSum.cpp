#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void solve(vector<int> v, int tar,int idx, vector<int> op,vector<vector<int>>& result) {
	if(tar == 0) {
		result.push_back(op);
		return;
	}

	if(idx == v.size() || tar < 0) {
		return;
	}
	vector<int> op1=op;
	vector<int> op2=op;
	op1.push_back(v[idx]);
	solve(v, tar-v[idx], idx, op1, result);
	solve(v, tar, idx+1, op2, result);
	return;
}

int main() {
	vector<int> v={2,3,5};
	vector<int> op;
	vector<vector<int>> result;
	int target=8;
	// int n=0;
	// cin>>n;
	// for(int i=0;i<n;i++) {
	// 	cin>>
	// }
	// cin>>target;
	solve(v,target,0, op, result);

	for(int i=0;i<result.size();i++) {
		for(int j=0;j<result[i].size();j++) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
}