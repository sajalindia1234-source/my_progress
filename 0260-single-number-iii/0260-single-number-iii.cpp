class Solution {
public:
        bool check(int i,int j){
if(i&(1U<<j))return true;//group2
return false;// group1
     }
		vector<int> singleNumber(vector<int>& nums){
int x=0;
int l= 0 ;

int n= nums.size();
int r = n-1;
for(auto &p:nums)x^=p;
int target=0;
for(int i=0;i<32;i++){
if(x&(1U <<i)){
target =i;
break;}
}
int k=0;
while(k<=r){
if(check(nums[k],target) )swap(nums[k],nums[r--]);
else k++;



}
int a=0;
int b=0;
for(int i=0;i<=r;i++)a^=nums[i];
for(int i=r+1;i<n;i++)b^=nums[i];
if (a > b)
            swap(a, b);

        return {a, b};
        
    }
};