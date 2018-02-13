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
    int e, l, x, y;

    while(cin >> e >> l && (e+l)){
        init(e);
        while(l--){
            cin >> x >> y;
            join(x, y);
        }
        set<int> s;
        for(int i=1; i<=e; i++)
            s.insert(id(i));

        cout << "Teste " << ++c << endl;
        cout << (s.size()==1? "normal":"falha") << endl << endl;
    }

    return 0;
}
