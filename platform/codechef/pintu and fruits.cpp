#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,t,sum=0;
	cin>>t;
	
	while(t--)
	{
		cin>>m>>n;
		int f[m],p[m];
		for(int i=0;i<m;i++)
		{
			cin>>f[i];
		}
		for(int j=0;j<m;j++)
		{
			cin>>p[j];
		}
		
		for(int k=0;k<m;)
		{
		for(int i=0;i<m;i++)
		{
			if(f[k]==f[i])
			{
				sum+=p[i];	
			}	
		}
		k++;
		}
		cout<<sum;
	}
	
}
