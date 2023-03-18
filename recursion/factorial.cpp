#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
	if(n==1) {
		return 1;
	}
	return n*factorial(n-1);
	
}

int FacInterative(int n) {
	int fac {1};
	while(n) {
		fac *=n;
		n--;
	}
	return fac;
}

int main() {
	int n {10};
	cout<<factorial(4)<<endl;
	cout<<FacInterative(4);
}