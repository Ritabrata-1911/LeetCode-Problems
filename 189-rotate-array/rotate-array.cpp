class Solution {
public:
    void rotate(vector<int>& nums, int k)
    {
        int n = size(nums);
        k=k%n;
        reverse(nums.begin(),nums.begin()+n);
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.begin()+n);
    }
};