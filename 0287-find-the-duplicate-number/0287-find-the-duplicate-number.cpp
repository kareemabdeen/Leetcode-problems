class Solution {
public:
int findDuplicate(vector<int>& nums) {
    int n = nums.size();
    int* freq = new int[n](); // dynamically allocate an array of n integers, initialized to zero

    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] != 0) {
            delete[] freq; // deallocate the array
            return nums[i];
        } else {
            freq[nums[i]]++;
        }
    }

    delete[] freq; // deallocate the array
    return -1; // or some other value to indicate no duplicate was found
}
};