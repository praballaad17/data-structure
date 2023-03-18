#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int sum) {
        int res = -1;
        if(sum == 0) {
            return 0;
        }
        if(!coins.size())
            return -1;
        vector<int> unchanaged = coins;
        int last = coins.back();
        coins.pop_back();
        if(last <= sum) {
            res = min(1 +  coinChange(unchanaged, sum - last), coinChange(coins, sum));
            return res;
        } else {
            res = coinChange(coins, sum);
            return res;ō
        }
    }

    int main() {
        vector<int> a = {1, 2, 5};
        cout<<coinChange(a, 11);
        return 0;
    }