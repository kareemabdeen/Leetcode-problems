class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }
    
    sort(nums.begin(), nums.end());
    
    int count = 1;
    int maxConsecutive = 0;
    
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i + 1] == nums[i]) {
            continue;  // Skip duplicate numbers
        }
        
        if (nums[i + 1] - nums[i] == 1) {
            count++;
        } else {
            maxConsecutive = max(maxConsecutive, count);
            count = 1;
        }
    }
    
    maxConsecutive = max(maxConsecutive, count);
    
    return maxConsecutive;
}
};