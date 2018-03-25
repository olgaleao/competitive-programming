using namespace std;

#include<bits/stdc++.h>

int main(){
    string s;
    bool in = false;
    cin >> s;
    for(int i=1; i<s.length() and !in; i++)
        if(s[i-1]=='s' and s[i]=='s')
            in = true;

    cout << (in? "hiss":"no hiss") << endl;
    return 0;
}
