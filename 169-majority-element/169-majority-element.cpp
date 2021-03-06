class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int f=n/2;
        unordered_map<int,int>m;
        for(auto &i:nums)
        {
            m[i]++;
            if(m[i]>f)
                return i;
        }
        return -1;
    }
};