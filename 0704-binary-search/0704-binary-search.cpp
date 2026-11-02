class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0 ,high = nums.size()-1;
        while(l<=high){
int mid = l+((high - l)/2);
            if(target == nums[mid])return mid;
            if(target<nums[mid])high= mid-1;
            else l= mid+1;
        }
      return -1;  
    }
};