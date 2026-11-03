class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {int n = nums.size();
        int ind =n ;
        int l =0 ,high = n-1;
        int mid;
        if(target<nums[0])return 0;
        while(l<=high){
       mid = l+((high - l)/2);
            if(target <= nums[mid]){ind= mid;
            high=mid-1;
            }else {
                l= mid+1;
        }
        }


return ind;
    }
};