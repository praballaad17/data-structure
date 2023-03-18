#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;


vector<char> firstUniqChar(string s) {
        map<char,int> m;
        vector<char> ans;
        for(char i : s){
            m[i]++;
        }
        int minIndex = INT_MAX;
        int c = 0;
        for(auto i : m){
            if(i.second == 1){
                cout<<"first "<<i.first<<endl;
                ans.push_back(i.first);
                c++;
            }
        }
        if(c==0) {
        	ans.push_back(-1);
        }
        return ans;
    }

int main() {
	vector<char> ans;
	ans = firstUniqChar("statics");
	for(int i=0;i< ans.size();i++) {
		cout<<ans[i]<<endl;
	}
	return 0;
}