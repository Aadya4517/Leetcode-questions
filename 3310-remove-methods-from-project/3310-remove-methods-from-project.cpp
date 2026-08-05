class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        for(auto &edge:invocations)
        adj[edge[0]].push_back(edge[1]);

        vector<bool>sus(n,false);
        queue<int>q;
        q.push(k);
        sus[k]=true;

        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(int newnode: adj[node])
            {
                if(!sus[newnode]){
                sus[newnode]=true;
                q.push(newnode);}
            }
        }
        for(auto &edge:invocations)
        {
            int u=edge[0];
            int v=edge[1];
             if(!sus[u] && sus[v])
             {
                vector<int>ans;
                for(int i=0;i<n;i++)
                ans.push_back(i);
                return ans;
             }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(!sus[i])
            ans.push_back(i);
        }
        return ans;
    }
};