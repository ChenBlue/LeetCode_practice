class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        bool first = false;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == val) first = true;
            else if(nums[i] != val && first == true) nums[count++] = nums[i];
            else if(nums[i] != val && first == false) count ++;
            
        }
        return count;
    }
};
