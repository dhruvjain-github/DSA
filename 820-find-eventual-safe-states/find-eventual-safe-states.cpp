class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> revadj(n);
        vector<int> indeg(n,0);

        for(int i=0;i<n;i++)
        {
            for(auto it:graph[i])
            {
                revadj[it].push_back(i);
                indeg[i]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indeg[i]==0)
            {
                q.push(i);
            }
        }

        vector<int> ans;

        while(!q.empty())
        {
            int t=q.front();
            q.pop();
            ans.push_back(t);
            for(auto it:revadj[t])
            {
                indeg[it]--;
                if(indeg[it]==0)
                {
                    q.push(it);
                }
            }
        }

        sort(ans.begin(),ans.end());
        return ans;

    }
};