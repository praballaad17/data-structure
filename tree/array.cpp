#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i< n; i++) {
		cin>>a[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++) {
		for(int j=i;j<n;j++) {
			if(a[i] + a[j] > a[i]*a[j]) {
				cnt++;
			}
		}
	}
	cout<<cnt;
}