#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	//char a[2]={"\t","#"};
	cin>>n;
	int hash=35,space=32;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i;j>0;j--)
		{
			cout<<(char)space;
		}
		for(int k=i;k>0;k--)
		cout<<(char)hash;
		cout<<"\n";
	}
}

