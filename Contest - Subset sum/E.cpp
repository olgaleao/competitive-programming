using namespace std;

#include<bits/stdc++.h>
#define MAXD 35
#define vi vector<int>

vi sum;
int as[MAXD], c, d;

int main(){
    while(cin >> d){

        bool flag = false;
        for(int i=1; i<=d; i++) {
            cin >> as[i];
            if (as[i-1] >= as[i]) flag = true;
        }

        sum = vi(30000, -1); sum[0] = 0;

        for(int i=1; i<=d; i++){
            for(int j=as[d]; j>=as[i]; j--)
                if(sum[j-as[i]] != -1)
                    sum[j] = max(sum[j-as[i]]+1, sum[j]);
        }
        for(int j=1; j<=d; j++)
            if(sum[as[j]] > 1)
                flag = true;

        cout << "Case #" << ++c << ": " << as[1];
        for(int i=2; i<=d; i++)
            cout << " " << as[i];

        cout << endl;
        if(flag) cout << "This is not an A-sequence." << endl;
        else cout << "This is an A-sequence." << endl;
    }
    return 0;
}
