class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int nb : nums) {
            if (seen.contains(nb)) {
                return true;
            }
            else{
                seen.insert(nb);
            }
        }
        return false;
    }
};