class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) 
    {
        vector<int> res(2 * nums.size());
        int i,k=(2*nums.size())-1;
        for(i=0;i<nums.size();i++)
        {
            res[i]=nums[i];
            res[k]=nums[i];
            k--;
        }
        return res;
    }
};