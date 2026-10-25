class Solution {
public:
    string removeOuterParentheses(string s) {
        int n= s.size();
        string h;
        vector<string> v;
        if(n==0)return h;
        int i=0;
        int count_open = 0;

        while (i < n) {
            do {
                h.push_back(s[i]);

                if (s[i] == '(')
                    count_open++;
                else
                    count_open--;

                i++;
            } while (count_open != 0);

            v.push_back(h);
            h = "";
        }

      string p = "";
for(string &k:v){
    k.pop_back();
    k.erase(0,1);
p+=k;

}

//p.erase(0,1);
return p;

    }
};