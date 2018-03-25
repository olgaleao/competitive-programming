using namespace std;

#include<bits/stdc++.h>

int main(){
    int n, x, ans = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x < 0)
            ++ans;
    }
    cout << ans << endl;

    return 0;
}
