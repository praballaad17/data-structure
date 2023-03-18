#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i=0;
	float j,p=0,z=0,v=0;
	cin>>n;
	j=n;
	float a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		p++;
	if(a[i]<0)
		v++;
	if(a[i]==0)
		z++;
	}
	
	cout<<p/j<<"\n"<<v/j<<"\n"<<z/j;
	return 0;
}
