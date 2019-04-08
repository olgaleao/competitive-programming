#include<bits/stdc++.h>

using namespace std;

int v[27];
string s;
bool ans, nvocc;

int main(){
    int n, sizeword;
    cin >> n;

    while(n--){
        nvocc = true; ans = true;
        int indexfl, indexll;
        cin >> s;
        if(s.size() != 1){
            for(int i=0; i<s.size(); i++){
                v[s[i]-'a']++;
            }
            for(int i=0; i<=26; i++){
                if(v[i] > 1){ ans = false; break; }
                if(v[i] == 1 and nvocc){
                    indexfl = i; nvocc = false; 
                }
                else if(v[i] == 1 and !nvocc)
                    indexll = i;
            }
            for(int i=indexfl; i <= indexll; i++)
                if(v[i] == 0){ ans = false; break; }    
        }

        if(ans) cout << "Yes";
        else cout << "No";

        cout << endl;
        for (int i=0; i<=26; i++) v[i] = 0;
    }

    return 0;
}