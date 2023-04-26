#include<bits/stdc++.h>
using namespace std;

void dfs(int **g,int n, int source)
{
    stack<int> s;
    bool * visited =new bool[n];

    for(int i=0; i<n; i++)
    {
        visited[i]=false;
    }

    s.push(source);
    visited[source]=true;
    cout<<endl;

    while(!s.empty())
    {
        int v=s.top();
        s.pop();
        cout<<v<<" ";
        for(int i=0; i<n; i++)
        {
            if(g[v][i]==1)
            {
                int next=i;
                if(visited[next]==false)
                {
                    s.push(next);
                    visited[next]=true;
                }
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
    int nodes, edges;
    cin>>nodes>>edges;

    int **g=new int *[nodes];
    for(int i=0; i<nodes; i++)
    {
        g[i]=new int [nodes];
    }

    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            g[i][j]=0;
        }
    }

    int u,v;
    for(int i=0; i<edges; i++)
    {
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }


    for(int i=0; i<nodes; i++)
    {
        for(int j=0; j<nodes; j++)
        {
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    int source;
    cout<<"Enter source value:"<<endl;
    cin>>source;
    dfs(g,nodes,source);

    return 0;
}
