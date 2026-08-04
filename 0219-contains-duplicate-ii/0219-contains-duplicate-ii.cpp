class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {

            if (mpp.count(nums[i])) {

                if (abs(i - mpp[nums[i]]) <= k) {
                    return true;
                }
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};





// This runs in O(n) time with O(n) extra space.





// Dry Run

// nums = [1,2,3,1]
// k = 3
// i	nums[i]	Map Before	                  Duplicate?	Distance	Map After
// 0	1	    {}	                            NO              -        {1→0}
// 1	2	    {1→0}	      	                No              -        {1→0,2→1}
// 2	3	    {1→0,2→1}	    	            No              -         {1→0,2→1,3→2}
// 3	1	    {1→0,2→1,3→2}	               Yes	            3	       Return true