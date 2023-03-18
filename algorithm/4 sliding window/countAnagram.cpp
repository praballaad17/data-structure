#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
	int countAnagram(string p, string s) {
		unordered_map<char,int> m;
		for(int i=0;i<p.size();i++) {
			m[p[i]]++;
		}
		int i=0,j=0,count=m.size(),k=p.length(),ans=0;

		while(j<s.length()) {
			if(m.find(s[j])!=m.end()) {
				m[s[j]]--;
				if(m[s[j]]==0) count--;
			}
			if(j-i+1<k) j++;
			else if(j-i+1 ==k) {
				if(count == 0) ans++;
				if(m.find(s[i])!=m.end()) {
					m[s[i]]++;
					if(m[s[i]]==1) count++;
				}
				i++;j++;
			}
		}
		return ans;
	}

int main() {
	string s ="forxxorfxdofr";
	string p="for";

	cout<<countAnagram(p, s)<<endl;

	return 0;
}