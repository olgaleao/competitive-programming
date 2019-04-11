#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define MAXN 200011
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int f[MAXN], n, x, mf, imf;
vi v;

int main(){_
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        v.pb(x); f[x]++;
        if(f[x]>mf){mf = f[x]; imf = i;}
    }

    if(n-mf == 0) cout << 0 << endl;
    else{
        cout << n-mf << endl;
        for(int i=imf; i<v.size()-1; i++){
            if(v[i+1] < v[i]){
                v[i+1] += abs(v[i]-v[i+1]);
                cout << 1 << ' ' << i+2 << ' ' << i+1 << endl;
            }
            else if(v[i+1] > v[i]){
                v[i+1] -= abs(v[i]-v[i+1]);
                cout << 2 << ' ' << i+2 << ' ' << i+1 << endl;
            }
        }

        for(int i=imf; i>0; i--){
            if(v[i-1] < v[i]){
                v[i-1] += abs(v[i]-v[i-1]);
                cout << 1 << ' ' << i << ' ' << i+1 << endl;
            }
            else if(v[i-1] > v[i]){
                v[i-1] -= abs(v[i]-v[i-1]);
                cout << 2 << ' ' << i << ' ' << i+1 << endl;
            }
        }
    }
    return 0;
}