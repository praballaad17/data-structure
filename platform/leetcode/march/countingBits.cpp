#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include<bits/stdc++.h>
#include <cmath>

using namespace std;

 void solve(int n,int i, vector<int>& ans) {
    cout<<"n: "<<n<<endl;
        if(n == 0 ) {
            // ans[i]++;
            return;
        }
        if(n == 1 ) {
            ans[i]++;
            return;
        }
        if(n%2 == 0) {
            solve(n/2,i,ans);
        }
        else {
            ans[i]++;
            solve(n/2, i,ans);
        }
    }


int main() {
	int n;cin>>n;
	 vector<int> ans(n+1);
        
        for(int i=0;i<=n;i++) {
            solve(i,i,ans);    
        }
        for(int i=0;i<=n;i++) {
        	cout<<ans[i]<<' ';
        }
        return 0;
}