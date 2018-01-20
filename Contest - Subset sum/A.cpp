#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 1101
#define vi vector<int>

using namespace std;

int moedas[MAXN];
vi possivel;

int main(){_
    int v, n;

    while(cin >> v >> n and v, n){

        possivel = vi(v+1, 0);

        for(int i=1; i<=n; i++)
            cin >> moedas[i];

        possivel[0] = 1;

        for(int i=1; i<=n; i++)
            for(int j=v; j>=moedas[i]; j--)
                if(possivel[j-moedas[i]]) possivel[j] = 1;

        cout << (possivel[v]? "sim":"nao") << endl;
    }
    return 0;
}
