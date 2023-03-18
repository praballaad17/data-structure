#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,t,a,b,apple=0,orange=0,m,n;
	cin>>s>>t;
	cin>>a>>b;
	cin>>m>>n;
	int a1[m],b1[n];
	for(int i=0;i<m;i++)
	{
		cin>>a1[i];
		a1[i]+=a;
		if(a1[i]<=t && a1[i]>=s)
		apple++;
	}
	for(int j=0;j<n;j++)
	{
		cin>>b1[j];
		b1[j]+=b;
		if(b1[j]<=t && b1[j]>=s)
		orange++;
	}
	cout<<apple<<"\n"<<orange;
}
