class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        const int size=nums.size();
        vector<int>prefixVector(size);
        vector<int>suffixVector(size);

        prefixVector[0]=nums[0];
        for(int i=1;i<=nums.size()-1;i++)
            prefixVector[i]=prefixVector[i-1]*nums[i];



        suffixVector[size-1]=nums[size-1];
        for(int i=size-2;i>=0 ;--i)
            suffixVector[i]=suffixVector[i+1]*nums[i];

        vector<int>answer(size);
        for(int i=0;i<=size-1;i++) {
            if (i == 0)
                answer[i]=suffixVector[i + 1];
            else if (i == size - 1)
                answer[i]=(prefixVector[i - 1]);
            else
                answer[i]=suffixVector[i + 1] * prefixVector[i - 1];
        }
        return answer;
    }
};