class Solution {
public:
    int mySqrt(int x) {
      int s=0,e=x;
      int mid,ans;
      while(s<=e){
         long long mid = (s+e)/2;
          if(mid*mid > x){
              e = mid-1;
          }
          else if(mid*mid < x){
              s = mid+1;
              ans = mid;
          }
          else if(mid*mid == x){
              ans = mid;
              break;
          }
      }
        return ans;
    }
};