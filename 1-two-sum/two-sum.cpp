class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int i,dif=0;
        for(i=0;i<nums.size();i++)
        {
            dif=target-nums[i];
            if(mpp.find(dif)!=mpp.end())
            {
                return {mpp[dif],i};
            }
                mpp[nums[i]]=i;
        }
        return {};
    }
};