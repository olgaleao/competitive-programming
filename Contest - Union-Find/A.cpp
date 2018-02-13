#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define init(n) for(int i=1; i<=n; i++) pai[i] = i;
#define join(u, v) pai[id(v)] = id(u);
#define MAXN (1<<20)

using namespace std;

int pai[MAXN];

int id(int x){
    return pai[x] == x ? pai[x] : pai[x] = id(pai[x]);
}

int main(){_
    int n, b, f, s;
    char c;

    cin >> n >> b;
    init(n);

    while(b--){
        cin >> c >> f >> s;
        if(c == 'C'){
            if(id(f) == id(s))
                cout << "S" << endl;
            else
                cout << "N" << endl;
        }
        else
            join(f, s);
    }
    
    return 0;
}
