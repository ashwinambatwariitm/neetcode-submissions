class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen; //set creation to store the number that we have aleardy encountered.

        for (int x: nums) {
            if (seen.find(x) != seen.end()) {// it is like find(x) donesnot reach to the end iterator, means x was found.
                return true;
            }

            seen.insert(x);
        }
        return false;
    }
};