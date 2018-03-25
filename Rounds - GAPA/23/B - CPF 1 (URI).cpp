using namespace std;
#include<bits/stdc++.h>

string in;
int b[2], j, k;

int main(){
    while(cin >> in){
        b[0] = b[1] = 0;
        j = 1, k = 9;
        for(int i=0; i<in.size()-2; i++){
            if(isdigit(in[i])){
                b[0] += (in[i]-'0')*j++;
                b[1] += (in[i]-'0')*k--;
            }
        }
        b[0] %= 11, b[1] %= 11;
        if(b[0]==10) b[0]=0;
        if(b[1]==10) b[1]=0;

        cout << (b[0]==in[12]-'0' and b[1]==in[13]-'0'? "CPF valido":"CPF invalido") << endl;
    }
    return 0;
}
