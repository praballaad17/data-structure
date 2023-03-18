#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    if(a[8]=='a' || a[8]=='A')
    {
        if(a[0]==1 && a[1]==2)
        {
            a[0]=0;a[0]=0;
			/*char *p1,*p2; 
			p1=&a[8];p2=&a[9];
			free(p1);free(p2);*/
            cout<<a;
        }
    }
}
