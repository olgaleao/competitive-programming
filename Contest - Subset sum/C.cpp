#include<bits/stdc++.h>
#define _ ios::sync_with_stdio(0);
#define vi vector<int>
#define MAXN 31

using namespace std;

int suit[MAXN];
vi v;

int main(){_
    int n, qtd, sum;
    string s;

    cin >> n;
    cin.ignore();

    while(n--){
        getline(cin, s);
        stringstream su(s);

        qtd = sum = 0;
        while(su>>suit[qtd])
            sum += suit[qtd++];



        if(sum%2==0){
            sum /= 2;
            v = vi(sum+1, 0);
            v[0] = 1;

            for(int i=0; i<qtd; i++)
                for(int j=sum; j>=suit[i]; j--)
                    if(v[j-suit[i]]) v[j] = 1;

            cout << (v[sum]? "YES":"NO") << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
