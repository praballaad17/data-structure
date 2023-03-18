#include<bits/stdc++.h>
using namespace std;

  bool isScramble(string s1, string s2) {
        if(s1.length() != s2.length()) return false;
        if(s1.empty() && s2.empty()) return true;
        if(s1.compare(s2) == 0) return true;
        if(s1.length() <= 1) return false;

        int n = s1.length();
        bool flag = false;
        for(int k=1; k<= n-1; k++) {
        bool cond1 = isScramble(s1.substr(0, k), s2.substr(n-k, k)) && isScramble(s1.substr(k, n-k), s2.substr(0, n-k));
        bool cond2 = isScramble(s1.substr(0, k), s2.substr(0, k)) && isScramble(s1.substr(k, n-k), s2.substr(k, n-k));
            if(cond1 || cond2)
                flag = true;
        }

        return flag;
    }

    int main() {

    	cout<<isScramble("ab", "bb");
    	return 0;
    }