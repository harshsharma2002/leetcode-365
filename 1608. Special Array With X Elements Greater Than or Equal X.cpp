class Solution {
private :
    int solve(vector<int> &nums,int mid)
    {
        int count=0;
        for(auto x:nums)
        {
            if(x>=mid)
            {
                count++;
            }
        }
        if(count==mid)
            return 0;
       return count>mid?1:-1;
    }
public:
    int specialArray(vector<int>& nums) 
    {
        int start=0,end=nums.size();
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            int val=solve(nums,mid);
            if(val==0)
            {
                return mid;
            }
            else if(val>0)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};
