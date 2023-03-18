#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int displayResults(int n, int **a, string str, int k){
    int res = 0;
    int x=0, y=0, flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==k){
                x = i;
                y = j;
                flag=1;
                break;
            }
        }
        if(flag)
            break;
    }
    cout<<"x "<<x<<"y "<<y<<endl;
    if(str=="ADJACENT"){
        int dx[]= {0,1,0,-1};
        int dy[]= {1,0,-1,0};
        
        for(int i=0;i<4;i++){
            int newx = dx[i] + x;
            int newy = dy[i] + y;
            
            if(newx < n && newy < n && newx >=0 && newy >= 0){
                res+= a[newx][newy];
            }
        }
    }
    else if(str=="DIAGONAL"){
        int dx[]= {1,1,-1,-1};
        int dy[]= {1,-1,-1,1};
        
        for(int i=0;i<4;i++){
            int newx = dx[i] + x;
            int newy = dy[i] + y;
            
            if(newx < n && newy < n && newx >=0 && newy >= 0){
                res+= a[newx][newy];
            }
        }
    }
    
    return res;
}

int main() {
    int n;
    cin >> n;
    cout<<n<<endl;
    int **a = new int*[n];
    for(int i=0; i<n; i++)
        a[i] = new int[n];
    for(int i=0; i< n;i++) {
        for(int j=0;j<n;j++) {
            cin >> a[i][j];
        }
    }

    cout<< "RESULT: "<<displayResults(n, a, "DIAGONAL", 3);
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    
    return 0;
}
