#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

 void solve(vector<int>& v, int k, int idx , int& ans) {
            if(v.size() == 1) {
                ans = v[0];
                return;
            }

            int temp = (idx + k)%v.size();
            // cout<<idx;
            v.erase(v.begin()+idx);
            solve(v,k, temp, ans);
            return;
    }


int main() {
	 
	 int a,k,idx=0,ans=0;

	 	cin>>a>>k;
        vector<int> v;
        for(int i=0;i<a;i++) {
            v.push_back(i+1);
        }
        // cout<<k;
        k--;
         solve(v,k,idx, ans );
       cout<<ans;
        return 0;
}