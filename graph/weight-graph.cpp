#include<bits/stdc++.h>
using namespace std;

vector<int> adj[500001];
int vis[500001];

int getPath(int w[],int s, int d, int val, int n) {
	if (s == d)
      return 1;
 
    for (int i = 0; i < n; i++)
        vis[i] = 0;
 
    list<int> queue;
 	int cnt=0;

    vis[s] = 1;
    queue.push_back(s);
 
    // list<int>::iterator i;
 
    while (!queue.empty())
    {
        s = queue.front();
        queue.pop_front();
 
        for(int i: adj[s])
        {
            if(val >= w[i]){
                    cnt++;  
            }
            if (i == d) {
                	return cnt;
            }
 
            if (!vis[i])
            {
                vis[i] = 1;
                queue.push_back(i);
            }
        }
    }
}

int main () {
	int n, e;
	cin>>e;
	for(int i=0;i<e;i++) {
		int a,b;
		cin>>a>>b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	int w[5] = {4, 7, 8 , 6, 4};

	cout<<"cnt"<<getPath(w, 1, 4, 7, 5);

}