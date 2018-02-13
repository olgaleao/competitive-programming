using namespace std;

#include<bits/stdc++.h>
#define vi vector<int>
#define MAXN 25

int ac[MAXN], dc[MAXN], hc[MAXN], k;
int ba, bd, bh;
vi asum, dsum, hsum;

int main(){
    int n, a, d, h; // qtd cartas, ataque, defesa, habilidade

    cin >> n >> a >> d >> h;

    for(int i=1; i<=n; i++){
        cin >> ac[i] >> dc[i] >> hc[i];
    }

    asum = vi(a+1, 0); asum[0] = 1;
    dsum = vi(d+1, 0); dsum[0] = 1;
    hsum = vi(h+1, 0); hsum[0] = 1;

    for(int i=1; i<=n; i++){
        if(a-ac[i]>0 && asum[a-ac[i]]) ba = 1;
        for(int j=a; j>=ac[i]; j--)
            if(asum[j-ac[i]]) asum[j] = 1;

        if(d-dc[i]>0 && dsum[d-dc[i]]) bd = 1;
        for(int j=d; j>=dc[i]; j--)
            if(dsum[j-dc[i]]) dsum[j] = 1;

        if(h-hc[i]>0 && hsum[h-hc[i]]) bh = 1;
        for(int j=h; j>=hc[i]; j--)
            if(hsum[j-hc[i]]) hsum[j] = 1;
    }

    cout << (asum[a]+dsum[d]+hsum[h]+ba+bd+bh==6? "Y":"N") << endl;

    return 0;
}
