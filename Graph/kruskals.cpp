class DisjointSet
{
    vector<int>parent;
    vector<int>size;
    
    public:
    
    DisjointSet(int n)
    {
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i =1 ;i<=n;i++)
        {
            parent[i]=i;
        }
    }
    
    int findParent(int node)
    {
        if(node == parent[node])
        {
            return node;
        }
        return parent[node]=findParent(parent[node]);
    }
    
    void unionBysize(int u,int v)
    {
        int U = findParent(u);
        int V = findParent(v);
        if(U==V)
          return;
        if(size[U] < size[V])
        {
            parent[U]=V;
            size[V]+=size[U];
        }
        else
        {
            parent[V]=U;
            size[U]+=size[V];
        }
    }
    
    
};

class Solution {
  public:
    int kruskalsMST(int V, vector<vector<int>> &edges) {
        // code here
       vector<pair<int,pair<int,int>>> adj;

       for(auto it : edges)
       {
           int u = it[0];
           int v = it[1];
           int w = it[2];

           adj.push_back({w,{u,v}});
       }
        DisjointSet ds(V);
        sort(adj.begin(),adj.end());
        int mstWt=0;
        for(auto it : adj)
        {
            int wt = it.first;
            int u = it.second.first;
            int v = it.second.second;
            if(ds.findParent(u)!=ds.findParent(v))
            {
                mstWt+=wt;
               ds.unionBysize(u,v);
            }
        }
        return mstWt;
    }
};