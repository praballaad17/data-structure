#include<bits/stdc++.h>

using namespace std;

string solve(string s1, string s2,int n, int m) {
	 int t[n+1][m+1];
	 string ans;
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

       int i=n;
       int j=m;
       while(i !=0 || j != 0) {
          if(s1[i-1] == s2[j-1]) {
               ans.push_back(s1[i-1]);
               cout<<s1[i-1]<<endl;
               i--;
               j--;
          } else {
            if( t[i-1][j] > t[i][j-1]) {
                   i--;
             } else {
                  j--;             
             }
         }
     }
     reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
	cout<<solve("abcfg", "abdgd", 5, 5);
	return 0;
}