class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};



// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int n=nums.size();
//         int idx=0;
//         int max1=INT_MIN,max2=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             if(max1<nums[i])
//             {
//                 max1=nums[i];
//                 idx=i;
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(max2<nums[i] && i!=idx)
//             {
//                 max2=nums[i];
//             }
//         }
//         return (max1-1)*(max2-1);
//     }
// };



// Bruteforce 
// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
//         int ans=INT_MIN;
//         for(int i=0;i<nums.size()-1;i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 ans=max(ans,(nums[i]-1)*(nums[j]-1));
//             }
//         }
//         return ans;
//     }
// };