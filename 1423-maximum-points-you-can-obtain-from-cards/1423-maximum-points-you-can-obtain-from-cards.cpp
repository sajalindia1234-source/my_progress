class Solution {
public:

    int maxScore(vector<int>& cardPoints, int k) {
        int l = k-1;
       int maxx=0,s=0;
        int n= cardPoints.size();
         int r = 0;
         for(int i = 0 ;i<k;i++)s+=cardPoints[i];
         maxx = s;
         int count=k;
        while(count--){
            s-=cardPoints[l];
  r--;l--;
  
  if(r==-1 )r=n-1;if(l==-1) l= n-1;
  s+=cardPoints[r];
  maxx = max(maxx,s);
        }
return maxx;
    }
};