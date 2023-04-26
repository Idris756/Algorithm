#include<bits/stdc++.h>
using namespace std;

struct Edge{
    int node;
    int weight;
};

int main(){

    vector<Edge> *g;

    int nodes;
    int edges;
    cin>>nodes>>edges;

    g = new vector<Edge>[nodes];

    int u,v, w;

    for(int i=0;i<edges;i++){
        cin>>u>>v>>w;
        Edge e = {v,w};
        g[u].push_back(e);
        e = {u,w};
        g[v].push_back(e);
    }


    for(int k=0;k<nodes;k++){
            cout<<k<<"-->";
        for(int i=0;i<g[k].size();i++){
            Edge e = g[k][i];
            cout<<"("<<e.node<<","<<e.weight<<")"<<" ";
        }
        cout<<endl;
    }

return 0;
}
