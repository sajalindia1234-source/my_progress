class Solution {
public: void generator(int sum,int i,vector<vector<int>>&v,vector<int>&giv, int target,vector<int>&temp,int p,int k){

if(sum==target ){
    if(temp.size()==k)
    v.push_back(temp);
return;
}
if( i==p|| temp.size() == k)return;
if(sum<target){
temp.push_back(giv[i]);
sum+=giv[i];
generator(sum,i+1,v,giv,target,temp,p,k);
sum-=giv[i];
temp.pop_back();

generator(sum,i+1,v,giv,target,temp,
p,k);

}else return;
}



    vector<vector<int>> combinationSum3(int k, int n) {
vector<int> giv = {1,2,3,4,5,6,7,8,9};
vector<vector<int>> v;
vector<int> temp;

int p = 9;
    generator(0,0,v,giv,n,temp,p,k);
    return v;

    }
};