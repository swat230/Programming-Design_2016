#include<iostream>
#include <vector>
using namespace std;
int main ()
{
    int n = 0, m = 0;
    cin >> n >> m;
  
    vector<int>* graph = new vector<int>[n + 1];
    for (int i = 0; i < m; i++)//input the adjacent graph
    {
        int u = 0, v = 0;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<int> path;//input the path
    int step = 0;
    while (cin >> step)
        path.push_back(step);
    
    for (int i = 0; i < path.size() - 1; i++)
    {
        int equal = 0;// to test if there is an edge between path i and i+1
        for (int j = 0; j < graph[path[i]].size(); j++)
        {
            if (path[i + 1] == graph[path[i]][j])
            {
                equal = 100;
                break;
            }
        }
        
        if (equal == 0)// if no edge, print out path i and i + 1 from small to large
        {
            if (path[i] >= path[i + 1])
                cout << path[i + 1] << " " << path[i] << endl;
            if (path[i] < path[i + 1])
                cout << path[i] << " " << path[i + 1] << endl;
        }
        
    }
    return 0;
}