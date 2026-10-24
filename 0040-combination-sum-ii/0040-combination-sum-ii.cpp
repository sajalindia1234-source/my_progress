class Solution {
public:
void generator(int sum,int i,vector<vector<int>>&v,vector<int>& candidates, int target,vector<int>&temp,int n){
if(sum==target){
    v.push_back(temp);
return;
}
if( i==n)return;
if(sum<target){

    temp.push_back(candidates[i]);
generator(sum+candidates[i],i+1,v,candidates,target,temp,
n);
temp.pop_back();

int j = i+1;
while(j<n && candidates[i]== candidates[j]){
j++;
}
generator(sum,j,v,candidates,target,temp,n);
}else return;


}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> temp;
        
        sort(candidates.begin(), candidates.end());


int n = candidates.size();
    generator(0,0,v,candidates,target,temp,n);
    return v;

    }
};