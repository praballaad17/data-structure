#include<bits/stdc++.h>

using namespace std;

void display(int a[], int n) {
	for(int i=1;i<=n;i++) {
	cout<<a[i]<<' ';
	}
}


void heapify (int a[], int n, int i) {
	int lar = i;
	int l = i*2;
	int r = i*2+1;
	if(l <= n and a[l] > a[lar])
		lar=l;
	if(r <= n and a[r] > a[lar])
		lar=r;
	if(lar != i) {
		swap(a[lar], a[i]);
		heapify(a,n,lar);
	}
}

void heapsort(int a[], int n) {
	for(int i=n/2;i>0;i--) {
		heapify(a, n, i);
	}
	
	cout<<endl;
	for(int i=n;i>1;i--) {
		swap(a[i],a[1]);
		heapify(a, i-1, 1);
	}
}


int main() {
	int a[7] = {0, 1, 5, 6, 4, 3, 2};

	heapsort(a, 6);
	display(a,6);

}