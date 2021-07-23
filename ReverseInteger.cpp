class Solution {
public:
    int reverse(int x) {
        long int rev=0;
        if(x >= 2147483647 || x <= -2147483648){
            return 0;
        }
        if(x>0){
            while(x>0){
                rev=rev*10;
                if(rev >= 2147483647 || rev <= -2147483648){
                    return 0;
                }
                rev = rev + (x%10);
                x=x/10;
            }
        }
        //For negative integers
        else{
            x = -1*x;
            while(x>0){
                rev=rev*10;
                if(rev >= 2147483647 || rev <= -2147483648){
                    return 0;
                }
                rev = rev + (x%10);
                x=x/10;
            }
            rev = -1*rev;
        }
        
        return int(rev);
    }
};
