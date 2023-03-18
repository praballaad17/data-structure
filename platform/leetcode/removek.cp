#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

    void solve(string num, int k, string& ans) {
        if(k==0) {
            ans = num;
            return ;
        }
        if(num[0]>num[1]) {
            num.erase(num.begin()+0);
        }
        else {
            num.erase(num.begin()+1);
        }
        while(num.length()>1 && num[0]=='0')
        {
            num.erase(num.begin()+1);
        	cout<<num<<endl;
        }
        solve(num,k-1,ans);
        return;
    }

    string removeKdigits(string num, int k) {
        string ans;
        solve(num, k, ans);
        return ans;
    }

int main() {
	string s ="10200";
	string a;
	s =removeKdigits(s,1)

	cout<<a;
}