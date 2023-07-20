class Solution {


public:
    void   sortVectorOfPairs(vector<pair<int,int>> & vec)
    {
       sort(vec.begin(),vec.end());
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapNums;  // num, freq
        vector<int> vecOfNums;
        vector<pair<int,int>>vectorOfPairs; // value , key


        // Count the frequency of each number in nums
        for (auto &num: nums) {
            mapNums[num]++;
        }

        for (auto &it: mapNums) {
            vectorOfPairs.emplace_back(it.second,it.first);
        }

        sortVectorOfPairs(vectorOfPairs); // assending order

        for(auto it=vectorOfPairs.rbegin(); it!=vectorOfPairs.rend() and k>0; it++,k--)
        {
            vecOfNums.emplace_back(it->second);
        }

        return vecOfNums;
    }
};
