#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

    //recursion has left some edge cases
    // void solve(string num, int k,int idx ,string& ans) {
    //     if(k==0 ) {
    //         if(num.length()==0) {
    //             ans ="0";
    //             return;
    //         }
    //         ans = num;
    //         return ;
    //     }
    //     if(num[idx]>num[idx+1]) {
    //         num.erase(num.begin()+idx);
    //     }
    //     else if(num[idx] == num[idx+1]) {
    //         solve(num,k,idx+1)
    //     }
    //     else {
    //         num.erase(num.begin()+idx+1);
    //     }
    //     cout<<"length: "<<num.length()<<endl;
    //     while(num.length()>1 && num[0]=='0')
    //     {
    //         num.erase(num.begin()+0);
    //     	cout<<num<<endl;
    //     }
    //     solve(num,k-1,0,ans);
    //     return;
    // }

    string removeKdigits(string num, int k) {
         int n=num.size();
        if(n==k)
        return "0";
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            while(k>0&&!st.empty()&&st.top()>num[i])
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0)
        {
            st.pop();
            k--;
        }
        string ans="";
        while(st.size())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        while(ans.size()>1&&ans[0]=='0')
        {
            ans.erase(0,1);
        }
        return ans;
    }

int main() {
	string s ="10";
	string a;
	a =removeKdigits(s,1);

	cout<<"ans:"<<a;
}