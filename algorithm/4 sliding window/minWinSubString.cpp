#include<iostream>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;

string solve(string s, string t) {
	unordered_map<char,int> mp;
        
        int start=-1, end=0;
        
        int i=0,j=0,mn=INT_MAX;
        for(int i=0;i<t.length();i++){
            mp[t[i]]++;
        }
        int count = mp.size();
        while(j<s.length()) {
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                
                if(mp[s[j]]==0){
                    count--;
                }
                // j++;
            }
            if(count == 0) {
                if(mn > j-i+1){
                    start=i;
                    end=j;
                    mn =min(mn,j-i+1);
                }
                while(count == 0) {
                    // mp[s[i]]++;
                    if(mp.find(s[i])!=mp.end()) {
                        mp[s[i]]++;
                       
                        if(mp[s[i]] == 1)
                        {
                            count++;    
                        }
                        
                    }
                    i++;
                    if(count == 0 && mn > j-i+1) {
                        start=i;
                        end=j;
                        mn =min(mn,j-i+1);
                    }
                
                }
                
                
            }
            j++;
        }
        return (start==-1)?"":s.substr(start,mn);
}
int main() {
	string s="A";
	string p="AA";

	cout<<'"'<<solve(s,p)<<'"';
}