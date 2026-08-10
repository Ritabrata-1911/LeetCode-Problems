class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<long long, int> mpp;
        long long sum=0,rem;
        int i,count=0;
        mpp[0]=1;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            rem=sum-k;
            if(mpp.find(rem)!=mpp.end())
            {
                count+=mpp[rem];
            }
            mpp[sum]++;
        }
        return count;
    }
};