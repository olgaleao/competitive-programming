#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 1101
#define vi vector<int>

using namespace std;

int moedas[MAXN];
vi possivel;

int main(){_
    int v, m;

    cin >> v >> m;

    possivel = vi(v+1, 0);

    for(int i=1; i<=m; i++)
        cin >> moedas[i];

    possivel[0] = 1;

    for(int i=1; i<=m; i++)
        for(int j=v; j>=moedas[i]; j--)
            if(possivel[j-moedas[i]]) possivel[j] = 1;

    cout << (possivel[v]? "S":"N") << endl;

    return 0;
}
