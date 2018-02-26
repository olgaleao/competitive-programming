using namespace std;

#include<bits/stdc++.h>
#define MAXN 1010
#define _ ios::sync_with_stdio(0);

int pino[MAXN];

int main(){_
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
        cin >> pino[i];

    int ant, ans = 0;
    for(int i=1; i<n; i++){
        ant = pino[i-1];
        if(ant <= m)
            pino[i] += (m-ant);
        else
            pino[i] -= (ant-m);

        ans += abs(m-ant);
    }
    cout << ans << endl;

    return 0;
}
