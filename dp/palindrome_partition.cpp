#include<bits/stdc++.h>

using namespace std;

int counter=0;
bool isPalin(string s) {
        int i=0, j=s.length()-1;
        while(i <j) {
            if(s[i] != s[j]) {
                return false;
                
            }
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
    int m =INT_MAX;
    for(int k=i; k<j; k++) {
        int temp = solve(s, i, k) + solve(s, k+1, j) +1;
        m = min(m, temp);
    }

    return m;
}

int main() {
    cout<<solve("nitin", 0, 4)<<endl;
    cout<<counter;
    return 0;
}
