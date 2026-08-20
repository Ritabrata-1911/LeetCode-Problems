class Solution {
public:
    vector<int> resultArray(vector<int>& nums)
    {
        int i,n=nums.size(),ind1=0,ind2=0;
        int arr1[n],arr2[n];
        arr1[0]=nums[0];
        arr2[0]=nums[1];
        for(i=2;i<n;i++)
        {
            if(arr1[ind1]>arr2[ind2])
            {
                ind1++;
                arr1[ind1]=nums[i];
            }
            else
            {
                ind2++;
                arr2[ind2]=nums[i]; 
            }
        }
        vector<int> result;
        for (i=0;i<=ind1;i++) 
        {
            result.push_back(arr1[i]);
        }
        for (i=0;i<=ind2;i++) 
        {
            result.push_back(arr2[i]);
        }
        return result;
    }
};