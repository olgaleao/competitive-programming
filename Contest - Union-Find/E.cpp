using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define init(n) for(int i=1; i<=n; i++) pai[i] = i;
#define MAXN (1<<20)
#define endl '\n'

int pai[MAXN], pts[MAXN];

int id(int x){
    return pai[x] == x? x : pai[x] = id(pai[x]);
}
void join(int u, int v){
	u = id(u), v=id(v);
	pai[v]=u, pts[u]+=pts[v];
}

int main(){_
    int n, m, q, a, b;
    int ans;

    while(cin >> n >> m && (n+m)){
        init(n); ans = 0;
        for(int i=1; i<=n; i++)
            cin >> pts[i];

        while(m--){
            cin >> q >> a >> b;
            if(q==2){
                if(id(1) == id(a) && !(id(b)==id(1))){
                    if(pts[id(1)] > pts[id(b)])
                        ++ans;
                }
                else if(id(1) == id(b) && !(id(a)==id(1)))
                    if(pts[id(1)] > pts[id(a)])
                        ++ans;
            }
            else
                join(a, b);
        }
        cout << ans << endl;
    }

    return 0;
}
