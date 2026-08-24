class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n=nums.size();

        int p=0;
        int q=0;
        int cnt=1;

        while(q<n)
        {
            if(nums[p]!=nums[q])
            {
                p++;
                nums[p]=nums[q];
                cnt++;
            }
            q++;
        }


        return cnt;
        
    }
};