using namespace std;
#include<bits/stdc++.h>
#define PI 3.14159265

int main(){
    int L, A, P, R;
    cin >> L >> A >> P >> R;
    cout << ((L*L+A*A+P*P <= R*R*4)? "S":"N") << endl;
    return 0;
}
