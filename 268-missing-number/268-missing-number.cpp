// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int ans;
//         int sz=nums.size();
//         nums.resize(nums.size()+1);
//         for(int i=0;i<nums.size()+1;i++)
//         {
//             if(nums[i]!=i)
//             {
//                 ans=i;break;
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        return n*(n+1)/2-accumulate(nums.begin(),nums.end(),0);
    }
};