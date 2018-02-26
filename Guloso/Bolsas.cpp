using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 10111

struct encom{
    int duracao, entrega;
};

int cmp(encom a, encom b){
    if (a.entrega != b.entrega) return a.entrega < b.entrega;
    return a.duracao < b.duracao;
}

encom e[MAXN];

int main(){_
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> e[i].duracao >> e[i].entrega;

    sort(e, e+n, cmp);

    int atraso = 0, hrinicio = 0;
    for(int i=0; i<n; i++){
        atraso = max(atraso, hrinicio+e[i].duracao-e[i].entrega);
        hrinicio += e[i].duracao;
    }

    cout << atraso << endl;
    return 0;
}
