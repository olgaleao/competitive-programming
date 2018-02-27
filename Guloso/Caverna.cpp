using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 10011
#define ll long long

ll merg[MAXN];

int main(){_
    ll n, m, o1, o2;
    bool poss = true;
    cin >> n >> m;

    for(int i=1; i<=n; i++)
        cin >> merg[i];

    ll sum = 0, ant;
    merg[0] = 0;
    for(int i=1; i<=n and poss; i++){
        o1 = merg[i]; o2 = abs(m-merg[i]); ant = sum;

        if(merg[i-1] <= o1 and merg[i-1] <= o2)
            sum += min(o1, o2);
        else if(merg[i-1] <= o1)
            sum += o1;
        else if(merg[i-1] <= o2)
            sum += o2;
        else
            poss = false;

        merg[i] = sum-ant;
    }
    poss? cout << sum : cout << "-1";
    cout << endl;
    return 0;
}
