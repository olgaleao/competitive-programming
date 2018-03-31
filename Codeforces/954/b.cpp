using namespace std;
#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);

int z(string s, int n){
    int l=0, r=0, m=0, mi=0;
    vector <int> z(n);
    for (int i = 1; i < n; i++) {
        if (i <= r) z[i] = min(z[i-l], r-i+1);
        while (i+z[i] < n && s[z[i]] == s[i+z[i]]) z[i]++;
        if (i+z[i]-1 > r) l = i, r = i+z[i]-1;
    }
    for (int i=0; i<n; i++){
        mi = min(z[i], i);
        if(mi == i)
            m = max(m, mi);
    }
    return m;
}

int main(){_
    int n;
    string s;
    cin >> n >> s;
    int ans = z(s, n);
    cout << (ans==0? n:n-ans+1) << endl;
    return 0;
}
