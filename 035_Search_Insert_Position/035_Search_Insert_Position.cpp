class Solution {
public:
    int binary_search(vector<int> nums, int l, int r, int target) {
        if(r-l < 1){
            if(target > nums[l]) return l+1;
            else return l;
        }
        int m = (r+l)/2;
        if(target == nums[m]) {
            return m;
        } else if(target < nums[m]) {
            return binary_search(nums, l, m-1, target);
        } else {
            return binary_search(nums, m+1, r, target);
        }
    }
    
    int searchInsert(vector<int>& nums, int target) {
        return binary_search(nums, 0, nums.size()-1, target);
    }
};
