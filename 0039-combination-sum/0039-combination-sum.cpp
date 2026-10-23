class Solution {
public:
void generator(int sum,int i,vector<vector<int>>&v,vector<int>& candidates, int target,vector<int>&temp,int n){

if(i==-1 || i==n)return;

if(sum==target){
    v.push_back(temp);
return;

}

if(sum<target){
temp.push_back(candidates[i]);
sum+=candidates[i];
generator(sum,i,v,candidates,target,temp,n);
sum-=candidates[i];
temp.pop_back();

generator(sum,i+1,v,candidates,target,temp,
n);

}else return;
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> temp;
        int n = candidates.size();
    generator(0,0,v,candidates,target,temp,n);
    return v;

    }
};