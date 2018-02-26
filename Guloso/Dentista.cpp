using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 1<<20

struct hrs{
    int e, s;
};

bool cmp(hrs a, hrs b){
    return a.s < b.s;
}

hrs cons[MAXN];

int main(){_
    int n, he, ans = 1;
    cin >> n;

    for(int i=0; i<n; i++)
        cin >> cons[i].e >> cons[i].s;

    sort(cons, cons+n, cmp);

    he = cons[0].s;
    for(int i=1; i<n; i++)
        if(he <= cons[i].e){
            ++ans;
            he = cons[i].s;
        }
        
    cout << ans << endl;

    return 0;
}
