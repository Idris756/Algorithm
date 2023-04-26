#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int> *G,int n, int s)
{
    queue<int> q;
    int *visited =new int[n];
    int *distance =new int[n];

    for(int i=0; i<n; i++)
    {
        visited[i]=distance[i]=0;
    }

    q.push(s);
    visited[s]=1;
    distance[s]=0;

    while(!q.empty())
    {
        int p =q.front();
        q.pop();
        for(int i=0; i<G[p].size(); i++)
        {
            int nxtadj=G[p][i];
            if(visited[nxtadj]==0)
            {
                visited[nxtadj]=1;
                q.push(nxtadj);
                distance[nxtadj]= distance[p]+1;
            }
        }
    }
    cout<<"Distance from: "<<s<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<s<<" to "<<i<<" distance "<<distance[i]<<endl;
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

    bfs(g,nodes,0);

    return 0;
}
/*
7 11
0 1
0 3
1 3
1 2
1 5
1 6
3 2
3 4
2 4
4 6
2 5
*/
