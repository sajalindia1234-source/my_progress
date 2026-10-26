class Solution {
public:
void generator(string &digits,vector<string> &ans,string s,int index,map<char,string> &mp,int n){
if(index ==n){
    ans.push_back(s);
    return;
}
string k=mp[digits[index]];
for(char &p:k){
    generator(digits,ans,s+p,index+1,mp,n);

}





}

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string s;
        int n = digits.size();
        map<char, string> mp;

mp['2'] = "abc";
mp['3'] = "def";
mp['4'] = "ghi";
mp['5'] = "jkl";
mp['6'] = "mno";
mp['7'] = "pqrs";
mp['8'] = "tuv";
mp['9'] = "wxyz";
        generator(digits,ans,s,0,mp,n);
        return ans;
    }
};