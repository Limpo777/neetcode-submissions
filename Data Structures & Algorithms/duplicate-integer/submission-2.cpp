class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> a;
        for(auto it: nums)a.insert(it);
        return a.size()!=nums.size();
    }
};