using namespace std;
#include<bits/stdc++.h>
#define MAXN 200011
int n, v[MAXN], sum, ind, acm;
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }
    bool flag = false;
    for(int i=0; i<n and !flag; i++){
        acm += v[i];
        if(2*acm >= sum){
            ind = i+1;
            flag = true;
        }
    }
    cout << ind << endl;
}
