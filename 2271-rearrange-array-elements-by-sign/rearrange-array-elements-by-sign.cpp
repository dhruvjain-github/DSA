class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int s=nums.size();
        int p=0,n=1;
        vector<int> ans(s);
        
        for(int i=0;i<s;i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p+=2;
            }
        }

        for(int i=0;i<s;i++)
        {
            if(nums[i]<0)
            {
                ans[n]=nums[i];
                n+=2;
            }
        }

        
        return ans;
    }
};