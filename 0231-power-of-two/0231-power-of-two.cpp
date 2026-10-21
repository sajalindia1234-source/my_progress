class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count=0;
        if(n<0)return false;

        for(int i =0;i<32;i++){
            if(n&(1<<i))count++;
            if(count==2)return false;
        }
        if(count==0)return false;
        return true;
    }
};