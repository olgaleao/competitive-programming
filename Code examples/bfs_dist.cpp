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

void bfs(int s){
    queue<int> fila;
    vis = vi(n+1,UNVISITED);
    dist = vi(n+1,INF);

    fila.push(s);  vis[s] = 1; dist[s]=0;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        // lógica do problema
        cout<<u<<":"<<dist[u]<<" ";

        for (int v : adj[u]){
            if (vis[v]==UNVISITED){
                fila.push(v);
                vis[v]=VISITED;
                dist[v]=dist[u]+1;
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
        cin>>s;

        bfs(s);
        cout<<endl;
    }
    return 0;
}
