class Solution {
public:
vector<int> productExceptSelf(vector<int>& nums) {

    const int size = nums.size();
    vector<int> prefixVector(size);
    vector<int> suffixVector(size);
    vector<int> answer;

    // reserve space for the answer vector
    answer.reserve(size);

    prefixVector[0] = nums[0];
    for (int i = 1; i < size; i++) {
        prefixVector[i] = prefixVector[i-1] * nums[i];
    }

    suffixVector[size-1] = nums[size-1];
    for (int i = size-2; i >= 0; i--) {
        suffixVector[i] = suffixVector[i+1] * nums[i];
    }

    for (int i = 0; i < size; i++) {
        if (i == 0) {
            answer.push_back(suffixVector[i+1]);
        } else if (i == size-1) {
            answer.push_back(prefixVector[i-1]);
        } else {
            answer.push_back(prefixVector[i-1] * suffixVector[i+1]);
        }
    }

    return answer;
}
};