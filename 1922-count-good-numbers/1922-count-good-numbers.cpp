class Solution {
public:
long long mod=1000000007;
    long long action(int a,long long n) {
         if(n==0)return 1;
        long long half=action(a,n/2);
        long long ans = (half*half)%mod;
        if(n%2==1)ans=(ans*a)%mod;
        return ans; 

    }

    long long countGoodNumbers(long long n) {
long long even = (n+1)/2;
long long odd = n/2;
return (action(5,even)*action(4,odd))%mod;
    }
};