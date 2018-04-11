using namespace std;
#include<bits/stdc++.h>
#define MAXN 200011

int ans, n, a, b;
int main(){
    string s;
    cin >> n >> a >> b;
    cin >> s;

    if(s[0]=='.'){
        if(a>b and a>0){
            s[0]='a'; a--; ans++;
        }
        else if(b>0){
            s[0]='b'; b--; ans++;
        }
    }

    for(int i=1; i<s.length(); i++){
        if(s[i]=='.'){
            if(s[i-1] == '*' or s[i-1] == '.'){
                if((a>b and a>0) or (b==0)){
                    s[i] = 'a'; a--; ans++;
                }
                else if(b>0){
                    s[i] = 'b'; b--; ans++;
                }
            }
            else if(s[i-1]=='a' and b>0){
                    s[i] = 'b'; b--; ans++;
            }
            else if(s[i-1]=='b' and a>0){
                    s[i] = 'a'; a--; ans++;
            }
        }
    }
    cout << ans << endl;
}
