#include<bits/stdc++.h>

using namespace std;
	
	int ** solve(int**  a) {
		int** ans;
		int n=3;
		cout<<n<<endl;
		for(int i=0;i<n;i++) {
			for(int j=0;j<i;j++) {
				cout<<a[i][j];
				ans[j][n-i] = a[i][j];
			}
		}
		return ans;
	}

int main() {
	int a[3][3] = {
			{1,2,3},
			{4,5,6},
			{7,8,9},
		};

	int** ans; 
	ans = solve(a);
	for(int i=0;i<3;i++) {
		for(int j=0;j<3;j++) {
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	} 

}