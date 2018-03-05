using namespace std;

#include<bits/stdc++.h>
#define ll long long
#define MAXN 1<<20
#define oo 1000000001

ll faixa[MAXN], premio[MAXN];
ll n, m, x;

ll bb(int x){
    int ini=1, fim=n, meio;

    while(ini <= fim){
        meio = (ini+fim)/2;

        if(faixa[meio]>x and faixa[meio-1]<=x) return meio;
        if(faixa[meio]<=x) ini = meio+1;
        if(faixa[meio]>x) fim = meio-1;
    }
    return 0;
}

int main(){
    cin >> n >> m; // n-No de faixas  m-No de ogros

    for(int i=1; i<n; i++)
        cin >> faixa[i];
    faixa[n] = oo;

    for(int i=1; i<=n; i++){
        cin >> premio[i];
    }

    for(int i=1; i<=m; i++){
        cin >> x;
        cout << premio[bb(x)];
        if(i != m) cout << " ";
    }
    cout << endl;
    return 0;
}
