class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int sum=0,prod=1;
        int copy=n;
        while(n>0)
        {
            sum+=n%10;
            prod*=n%10;
            n=n/10;
        }
        return copy%(sum+prod)==0;
    }
};