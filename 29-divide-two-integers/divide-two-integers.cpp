class Solution {
public:
    long long multiply(long a,long b){
        long long ans = 0;
        while(b>0){ 
            if(b&1){
                ans+=a;
            }
            a<<=1;
            b>>=1;
        }
        return ans;
    }
    long long binarySearch(long long  a,long long b){
        long long s=0;
        long long e=a;
        long long ans=0;
        while(s<=e){
            long long mid =s+((e-s)/2);
            if(multiply(b,mid)==a){
                return mid;
            }else if(multiply(b,mid)>a){
                e=mid-1;
            }else{
                ans = mid;
                s=mid+1;
            }
        }
        
        return ans;
    }
    int divide(int dividend, int divisor) {
        if(dividend == 0){
            return 0;
        }
        long long a = abs((long long)(dividend));
        long long b = abs((long long)(divisor));
        long long ans = (binarySearch(a,b));
        
        if ((dividend>0 && divisor>0) || (dividend<0 && divisor<0) ){
           ans =  ans;
        }else{
            ans= -ans;
        }
        if(ans>INT_MAX){
            return INT_MAX;
        }
        if(ans<INT_MIN){
            return INT_MIN;
        }
        return (int)ans;
    }
};