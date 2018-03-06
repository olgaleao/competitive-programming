using namespace std;

#include<bits/stdc++.h>
#define MAXN 1<<20
#define _ ios::sync_with_stdio(0);
#define ll long long

ll casa[MAXN];
ll n, k;

ll bb(ll x){
    ll ini=1, fim=n, meio;

    while(ini <= fim){
        meio = (ini+fim)/2;

        if(x+casa[meio]==k) return meio;
        if(casa[meio]>k-x) fim = meio-1;
        if(casa[meio]<k-x) ini = meio+1;
    }
    return 0;
}

int main(){_
    cin >> n;

    for(int i=1; i<=n; i++)
        cin >> casa[i];

    cin >> k;

    int ans;
    for(int i=n; i>0; i--){
        ans = bb(casa[i]);
        if(ans and casa[i]+casa[ans]==k){
            cout << casa[ans] << " " << casa[i] << endl;
            break;
        }
    }

    return 0;
}
