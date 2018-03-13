using namespace std;

#include<bits/stdc++.h>
#define MAXN 1010
#define ll long long

ll a[MAXN], dp[MAXN];
ll n, k, m, c;

ll febre(int k){
    if(dp[k] != -1)
        return dp[k];

    ll sum = 0;
    for(int i=1; i<=n; i++)
        sum = (sum+a[i]*febre(k-i))%m;
    
    return dp[k]=sum;
}

int main(){

    memset(dp, -1, sizeof(dp));
    cin >> n >> k >> m;

    for(int i=1; i<=n; i++)
        cin >> a[i];

    for(int i=1; i<=n; i++)
        cin >> dp[i];

    cout << febre(k) << endl;

    return 0;
}
