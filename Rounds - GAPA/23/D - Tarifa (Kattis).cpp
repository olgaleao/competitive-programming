using namespace std;

#include<bits/stdc++.h>

int main(){
    int x, n, p;
    cin >> x >> n;
    long ans = x;
    while(n--){
        cin >> p;
        ans += (x-p);
    }
    cout << ans << endl;
    return 0;
}
