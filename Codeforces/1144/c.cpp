#include<bits/stdc++.h>
#define MAXN 200011
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back

using namespace std;

int f[MAXN], n, x;
vi inc, de;
bool ans = true;

int main(){_
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        f[x]++;
        if(f[x]==3) ans = false;
        if(f[x]==2) inc.pb(x);
        if(f[x]==1) de.pb(x);
    }
    if(!ans) cout << "NO";
    else{
        cout << "YES" << endl;
        cout << inc.size() << endl;
        sort(inc.begin(), inc.end());
        for(auto it=inc.begin(); it!=inc.end(); ++it)
            cout << *it << ' ';
        cout << endl;

        cout << de.size() << endl;
        sort(de.begin(), de.end(), greater<int>());
        for(auto it = de.begin(); it != de.end(); ++it)
            cout << *it << ' ';
    }
    cout << endl;
    return 0;
}