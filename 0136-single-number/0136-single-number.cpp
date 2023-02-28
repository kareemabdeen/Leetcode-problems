class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size=nums.size();
        if(size==1) return nums[0];
        sort (nums.begin(),nums.end());
        for(int i=0;i<size;i++) //i=0 ..i<5
        {
            if(i==0 and nums[0]!=nums[1])//begin of vector
                return nums[0];
            else if (i==size-1)//last element
                return nums[size-1];
            else //in between
            {
                if(nums[i]!=nums[i+1] and nums[i]!=nums[i-1])
                    return nums[i];
            }

        }
        return 1;

    
}
};