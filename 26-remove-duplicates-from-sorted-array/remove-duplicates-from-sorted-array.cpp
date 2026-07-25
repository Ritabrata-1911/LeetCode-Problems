class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i,j,n;
        n=nums.size();
        i=0;
        for(j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};