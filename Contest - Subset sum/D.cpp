using namespace std;

#include<bits/stdc++.h>
#define vi vector<int>
#define MAXN 1111

vi psum;
int objs[MAXN], t;

int main(){
    int x, y, n;

    while(cin >> x >> y >> n and (x||y||n)){    // N-qtd de objetos
        cout << "Teste " << ++t << endl;

        long int sum = x+y;

        for(int i=1; i<=n; i++){
            cin >> objs[i];
            sum += objs[i];
        }

        if(not (sum%2)){
            psum = vi(sum+1, 0);
            psum[0] = 1;
            
            sum = sum/2 - max(x, y);

            if(sum >= 0){
                for(int i=1; i<=n; i++)
                    for(int j=sum; j>=objs[i]; j--)
                        if(psum[j-objs[i]]) psum[j] = 1;
            }
            cout << (psum[sum]? "S":"N") << endl;
        }
        else cout << "N" << endl;
        cout << endl;
    }
    return 0;
}
