class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size();

        int i=0,j=n-1;

        while(i<j)
        {
            if(nums[i]+nums[j]==t)
            {
                break;
            }

            if(nums[i]+nums[j]>t)
            {
                j--;
            }
            else
            {
                i++;
            }
        }

        return {i+1,j+1};
        
    }
};