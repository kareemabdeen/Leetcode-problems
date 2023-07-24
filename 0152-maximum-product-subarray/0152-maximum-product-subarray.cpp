class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxii=INT_MIN;
        int leftPrefix=1;
        int rightPrefix=1;
        const int size= nums.size();
     for(int i=0;i<nums.size();i++)  // -1 ,1  , this corner case that make us iterate from both sides
     {
         maxii=max(leftPrefix*=nums[i],maxii);
         if(nums[i]==0) leftPrefix=1;// handles that case {-1,0,2} , in order not to updates and continue leftPrefix =0 untill the end .

         maxii=max(rightPrefix*=nums[size-1-i],maxii);
          if(nums[size-1-i]==0) rightPrefix=1;
     }
     return maxii;
    }
};