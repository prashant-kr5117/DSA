class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[nums.size()];   //   if only have one size
        int sum=0,msum=INT_MIN; //  initializing sum and maximum 
        
              for(auto i:nums){   
                  sum+=i;
                  msum=max(sum,msum);
                  if(sum<0) sum=0;
              }
        return msum;        
    }
};
