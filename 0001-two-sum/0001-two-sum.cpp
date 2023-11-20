class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> myVec{};
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if((nums[j])==target- nums[i]){
                    myVec.push_back(i);
                    myVec.push_back(j);
                    return myVec;


                }
            }
        }
        return myVec ;
    }
};