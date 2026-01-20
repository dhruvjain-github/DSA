class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int elem=nums[0];

        for(int i=1;i<n;i++)
        {
            if(elem!=nums[i])
            {
                cnt--;
            }
            else
            {
                cnt++;
            }

            if(cnt==0)
            {
                elem=nums[i];
                cnt=1;
            }
        }
        
        return elem; 
    }
};