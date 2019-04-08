#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define pb push_back
#define popb pop_back

using namespace std;

vi odd, even;
int n, x, bigger = -1;

int main(){_
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x > bigger) bigger = x;
        (x % 2)? odd.pb(x):even.pb(x);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    if(odd.size() != even.size())
        odd.size() > even.size() ? bigger = odd.back() : bigger = even.back();

    for(int i=0; i<n; i++){
        if (bigger%2){
            odd.popb();
            if (even.size() >= 1) bigger = even.back();
            else i = n;
        }
        else {
            even.popb();
            if(odd.size() >= 1) bigger = odd.back();
            else i = n;
        }
    }
    int sumodd = 0, sumeven = 0;
    for(int i=0; i<odd.size(); i++)
        sumodd += odd[i];
    for(int i=0; i<even.size(); i++)
        sumeven += even[i];
    cout << sumodd+sumeven << endl;

    return 0;
}