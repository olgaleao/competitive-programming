using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define join(u, v) pai[id(v)] = id(u);
#define init(n) for(int i=1; i<=n; i++) pai[i] = i;
#define MAXN (1<<20)

int pai[MAXN];

int id(int x){
    return pai[x] == x? x : pai[x] = id(pai[x]);
}

int main(){_
    int n, m, a, b;

    cin >> n >> m;
    init(n);

    while(m--){
        cin >> a >> b;
        join(a, b);
    }

    set<int> s;
    for(int i=1; i<=n; i++)
        s.insert(id(pai[i]));

    cout << s.size() << endl;

    return 0;
}
