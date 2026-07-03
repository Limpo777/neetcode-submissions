class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        for(int i =0;i<n-1;i++){
            if(nums[i+1]-nums[i]==0)
            return true;
        }
        return false;
    }
};