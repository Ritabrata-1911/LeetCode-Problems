class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0,i;
        for(i=0;i<nums.size();i++)
            sum+=nums[i];
        return sum%k;
    }
};