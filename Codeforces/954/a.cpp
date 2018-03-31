using namespace std;
#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);

int main(){_
    int n;
    string s, a;
    cin >> n >> s;
    s[n] = 'D';
    for(int i=0; i<=n; i++){
        if((s[i]=='U' and s[i+1]=='R') or (s[i]=='R' and s[i+1]=='U'))
            a += 'D', i++;
        else a += s[i];
    }
    cout << a.length()-1 << endl;
    return 0;
}
