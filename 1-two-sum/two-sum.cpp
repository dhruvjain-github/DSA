class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        int n=arr.size();
        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            int rem=tar-arr[i];
            if(mp.find(rem)!=mp.end())
            {
                return {mp[rem],i};
            }
            mp[arr[i]]=i;
        }

        return {-1,-1};
    }
};