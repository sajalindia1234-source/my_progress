class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int r_5=0;
      int r_10 =0;
      int r_20 =0;
      for(int &p:bills){
        if(p==5)r_5++;
        else if(p==20){
if(r_10 && r_5){
    r_10--;
    r_5--;
}
else if(r_5>2)r_5-=3;
else return false;
        }

        else{
            if(r_5>0){
            r_10++;
            r_5--;
            }
            else return false;
        }
      }  
      return true;
    }
};