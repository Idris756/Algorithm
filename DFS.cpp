#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> *g,int n, int source)
{
    stack<int> s;
    bool * visited =new bool[n];
    s.push(source);
    visited[source]=true;

    while(!s.empty())
    {
        int v=s.top();
        s.pop();
        cout<<v<<" ";
        for(int i=0; i<g[v].size(); i++)
        {
            int next=g[v][i];
            if(!visited[next])
            {
                s.push(next);
                visited[next]=true;
            }
        }
    }
    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i<<" "<<visited[i]<<endl;
    }
}


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

    dfs(g,nodes,0);


}
