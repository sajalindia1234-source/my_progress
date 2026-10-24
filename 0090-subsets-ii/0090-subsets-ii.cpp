// class Solution {
// public:
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
//     }
// };
class Solution {
public:

void generator(vector<vector<int>> &v,vector <int> &temp,int i,vector<int>& nums,int n){
    if(i==n){v.push_back(temp);
        return;
    }

    temp.push_back(nums[i]);
generator(v,temp,i+1,nums,n);
temp.pop_back();
int j = i+1;
while(j<n && nums[i]== nums[j]){
j++;
}


generator(v,temp,j,nums,n);






}
    vector<vector<int> > subsetsWithDup(vector<int>& nums) {

sort(nums.begin(), nums.end());
vector<vector<int>> v;
vector<int> temp;
int n = nums.size();
generator(v,temp,0,nums,n);
return v;
    }
};