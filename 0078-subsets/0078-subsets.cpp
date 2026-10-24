// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//     // int n = nums.size(); 
//       // vector<vector<int>> ans;
//        // bit masking
// //        for(int muchota=0;muchota<(1<<n);muchota++){
// // vector<int> temp;
// // for(int i=0 ;i<n;i++){
// //     if(muchota & (1<<i))temp.push_back(nums[i]);
// // }
// // ans.push_back(temp);
// //        }return ans;
// //     }


// // recursion
// vector<vector<int>> s;
// vector<int> temp;


// generator(s, nums, temp, 0);

//         return s;
//     }


//    void generator(vector<vector<int>> &s,vector<int>& nums,vector<int>&temp,int i){

// if(i== nums.size()){s.push_back(temp);return;}
// generator(s,nums,temp,i+1);
// temp.push_back(nums[i]);
// generator(s,nums,temp,i+1);
// temp.pop_back();

//    } 
// };


class Solution {
public:
    vector<int> ans;
    vector<vector<int>> res;
    void gen(vector<int>& v,int i){
        if(i==v.size()){
            res.push_back(ans);
            return;
        }
        
        ans.push_back(v[i]);
        gen(v,i+1);
        ans.pop_back();
        gen(v,i+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        gen(nums,0);
        return res;
    }
};