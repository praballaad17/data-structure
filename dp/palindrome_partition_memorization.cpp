#include <bits/stdc++.h>

using namespace std;
int t[1001][1001];
int counter=0;
bool isPalin(string s) {
        int i=0, j=s.length()-1;
        while(i <j) {
            if(s[i] != s[j])
                return false;
            i++;
            j--;
        }

        return true;
    }

int solve(string s, int i, int j) {
    counter++;
    if(i >= j) 
        return 0;
    if(isPalin(s)) 
        return 0;
if(t[i][j] != -1)
{
	return t[i][j];
}
    int m =INT_MAX;
    for(int k=i; k<j; k++) {
    	if(t[i][k] == -1)
			t[i][k] = solve(s, i, k);  
        if(t[k+1][j] == -1)
			t[k+1][j] = solve(s, k+1, j);  
//        t[k+1][j] = solve(s, k+1, j);
        int temp = t[i][k] + t[k+1][j] + 1;
        m = min(m, temp);
    }
    t[i][j] = m;
    return m;
}

int main() {
    memset(t, -1, sizeof(t));
    string s = "aasdfasdfasdf";
    cout<<solve(s, 0, s.length()-1)<<endl;
    cout<<counter;
    return 0;
}

