class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
    {
        //optimised solution
        
        map<int, int> m;
        vector<int> n= nums;
        sort(n.begin(), n.end());
        
        for(int i=nums.size()-1; i>=0; i--) 
            m[n[i]] = i;

        for(int i=0; i<nums.size(); i++) 
            nums[i] = m[nums[i]];
        return nums;
    }
};