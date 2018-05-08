class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> sumMap;
        vector<int> sum;
        /*nums.clear();
        nums.push_back(3);
        nums.push_back(3);*/
        
        for(int i = 0; i < nums.size(); i++){
            //sumMap.insert({nums[i], i});
            sumMap[nums[i]] = i;
        }
        //for (pair<int, int> element : sumMap){
        for (int i = 0; i < nums.size(); i++){
            int numA = nums[i];
            int numB = target - numA;
            unordered_map<int, int>::iterator search = sumMap.find(numB);
            if (search != sumMap.end() && search->second != i)
	        {
		        sum.push_back(i);
                sum.push_back(sumMap[numB]);
                return sum;
	        }
        }
		    
        sum.push_back(0);
        sum.push_back(2);
        return sum;
    }
};
