#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>*g;
    int nodes;
    int edges;
    cin>>nodes>>edges;

    g=new vector<int>[nodes];

    int u,v;

    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int k=0; k<nodes; k++)
    {
        cout<<k<<"-->";
        for(int i=0; i<g[k].size(); i++)
        {
            cout<<g[k][i]<<" ";
        }
        cout<<endl;
    }

}
