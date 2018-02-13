using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define join(u, v) pai[id(v)] = id(u);
#define init(n) for(int i=1; i<=n; i++) pai[i] = i;
#define MAXN (1<<20)
#define endl '\n'

int pai[MAXN], c;

int id(int x){
    return pai[x] == x? x : pai[x] = id(pai[x]);
}

int main(){_
    int t, n, m, x, y;

    cin >> t;
    while(t--){
        cin >> n >> m;
        init(n);

        while(m--){
            cin >> x >> y;
            join(x, y);
        }
        set<int> s;
        for(int i=1; i<=n; i++)
            s.insert(id(i));

        cout << "Caso #" << ++c << ": ";
        if(s.size()==1)
            cout << "a promessa foi cumprida" << endl;
        else
            cout << "ainda falta(m) " << s.size()-1 << " estrada(s)" << endl;
    }

    return 0;
}
