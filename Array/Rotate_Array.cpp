//189. Rotate Array: Given an array, rotate the array to the right k steps, where k is non-negative. 
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // get the length of array and mod to get modified k 
        k %= nums.size();
        //reverse orginal array 
        reverse(nums.begin(), nums.end());
        //reverse the first k elements
        reverse(nums.begin(), nums.begin()+k);
        //reverse the rest n- k elements 
        reverse(nums.begin()+k, nums.end());
    }
};
