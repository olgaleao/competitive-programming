using namespace std;

#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define MAXN 1<<20

int dinh[] = {1, 5, 10, 25, 50, 100};

int main(){
    int n, ans = 0;
    cin >> n;

    for(int i=5; i>=0; i--){
        while(n >= dinh[i]){
            n-=dinh[i];
            ++ans;
        }
    }
    cout << ans << endl;

    return 0;
}
