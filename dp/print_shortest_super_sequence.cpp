#include<bits/stdc++.h>

using namespace std;

string solve(string s1, string s2) {
    int n=s1.length();
    int m =s2.length();
	 int t[n+1][m+1];
	 string ans;

     //lcs part
        for(int i=0;i<=n;i++) {
            t[i][0] = 0;
        }
        
        for(int i=0;i<=m;i++) {
            t[0][i] = 0;
        }

        for(int i=1; i<=n; i++) {
            for(int j=1;j<=m;j++) {
                if(s1[i-1] == s2[j-1])
                     t[i][j] = 1 + t[i-1][j-1];
                else {
                     t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
                
            }
        }

        //printing
       int i=n;
       int j=m;
       while(i !=0 || j != 0) {
          if(s1[i-1] == s2[j-1]) {
               ans.push_back(s1[i-1]);
               i--;
               j--;
          } else {
            if( t[i-1][j] > t[i][j-1]) {
                   ans.push_back(s1[i-1]);
                   i--;
             } else {
                ans.push_back(s2[j-1]);
                  j--;             
             }
         }
     }
     while(i != 0) {
        ans.push_back(s1[i-1]);
        i--;
     }
     while(j != 0) {
        ans.push_back(s2[j-1]);
        j--;
     }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
	cout<<solve("abcfg", "abdgd");
	return 0;
}