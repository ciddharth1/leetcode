class Solution {
public:
    bool checkDivisibility(int temp) {
        int n=temp;
        int sum=0,prd=1;
        while(n>0){
            sum+=n%10;
            prd*=n%10;
            n=n/10;
        }
         return temp % (sum + prd) == 0;
    }
};


