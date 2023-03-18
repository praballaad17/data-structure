#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++) {
        	auto it = s.find(nums[i]);
        	if(it == s.end()) {
        		s.insert(nums[i]);
        	}
        	else {
        		s.erase(it);
        	}
        }
        return *s.begin();
    }

int main() {
	vector<int> v={2,2,1};
	int n =	singleNumber(v);
	cout<<n;
	return 0;
}