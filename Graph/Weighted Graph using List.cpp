#include<bits/stdc++.h>
using namespace std;

struct vertex
{
    int value;
    int cost;
};
int main()
{
    vector<vertex>*g;
    int nodes;
    int edges;
    cin>>nodes>>edges;

    g=new vector<vertex>[nodes];

    int u,v,w;

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        //g[v].push_back({u,w});
    }

    for(int k=0; k<nodes; k++)
    {
        cout<<k<<"-->";
        for(int i=0; i<g[k].size(); i++)
        {
            cout<<"["<<g[k][i].value<<" "<<g[k][i].cost<<"]";
        }
        cout<<endl;
    }
    return 0;

}
