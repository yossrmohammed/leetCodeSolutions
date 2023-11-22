class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
            
        }
        else{
            int temp=x;
            long reversed=0;
            while(temp!=0){
                reversed= reversed*10 +temp%10;
                temp/=10;
                
            }
            return (reversed==x);
            
        }
        
        
    }
};