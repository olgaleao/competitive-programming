#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define eb emplace_back
#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define vi vector<int>
#define vvi vector<vi>
#define INF 0x3f3f3f3f
#define UNVISITED 0
#define VISITED 1
#define TAM 2
#define MOD 303700049

using namespace std;

vvi from; // from[u] guarda que origens chegaram no U
vvi adj;// listas de adjacência
vi vis; // vis[u]==1 se o vértice U já foi visitado,0 caso contrário
vi dist; // dist[u] guarda a distância do vértice U para o vértice origem
int n; // qtd de vétices
int m; // qtd arestas
int u,v; // vértices uso geral
int w; // peso
int s; // vértice de origem

void bfs(int s, int s2){
    queue<int> fila;
    dist = vi(n+1,INF);
    from = vvi(n+1);

    fila.push(s); dist[s]=0; from[s].eb(s);
    fila.push(s2); dist[s2]=0; from[s2].eb(s2);
    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        // lógica do problema
        cout<<u<<":";
        for (int org : from[u]){
          cout<<org<<",";
        }
        cout<<" ";

        for (int v : adj[u]){
            if (dist[v]==INF){//primeira vez de V
                fila.push(v);
                dist[v]=dist[u]+1;
                from[v]=from[u];//só pode em vector
                /*for (int org : from[u]){
                  from[v].eb(org);
                }*/
            }
            else if(dist[u]+1==dist[v]){
              for (int org : from[u]){
                from[v].eb(org);
              }
            }
        }

    }
    cout<<endl;
}

int main(){_
    while (cin>>n>>m){
        adj = vvi(n+1);
        while (m--){
            cin>>u>>v;
            adj[u].eb(v);
            adj[v].eb(u);// só tem esse linha se for NAO Direcionado
        }
        int s2;
        cin>>s>>s2;

        bfs(s,s2);
        cout<<endl;
    }
    return 0;
}
