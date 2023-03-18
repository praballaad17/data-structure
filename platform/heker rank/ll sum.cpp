#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int n;
	ll sum;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;
}
