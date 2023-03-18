#include <bits/stdc++.h>

using namespace std;
int main()
{
    int num,n;
    cin>>n;
    int a[n];
    for(int i=1,x;i<=n;i++)
    {
        cin>>x;a[x]++;
    }
    
        num=1;
        for(int i=2;i<=5;i++)
        {
            if(a[i]>a[num])
            {
                num=i;
            }
        }
       
    
     cout<<num;
}
