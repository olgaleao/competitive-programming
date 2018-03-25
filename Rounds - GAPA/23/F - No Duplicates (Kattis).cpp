using namespace std;

#include<bits/stdc++.h>

int main(){
    string s;
    int cont=0;
    set<string> w;
    while(cin >> s){
        w.insert(s);
        cont++;
    }
    cout << (w.size() == cont? "yes":"no") << endl;

    return 0;
}
