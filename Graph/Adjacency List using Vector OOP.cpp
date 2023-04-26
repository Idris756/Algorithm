#include<bits/stdc++.h>
using namespace std;

class Graph {
    private:
        vector<int>* g;
        int nodes;

    public:
        Graph(){
        }
        Graph(int n) {
            nodes = n;
            g = new vector<int>[nodes];
        }

        void addEdge(int u, int v) {
            g[u].push_back(v);
            g[v].push_back(u);
        }

        void printGraph() {
            for(int k = 0; k < nodes; k++) {
                cout << k << "-->";
                for(int i = 0; i < g[k].size(); i++) {
                    cout << g[k][i] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int nodes, edges;
    cin >> nodes >> edges;

    Graph graph(nodes);

    int u, v;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        graph.addEdge(u, v);
    }

    graph.printGraph();

    return 0;
}
