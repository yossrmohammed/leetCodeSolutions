class Solution {
public:
    int myAtoi(string s) {
        int n= s.length();
        int number=0;
        int flag=1;
        int i=0;
        while (s[i]==' '){
            i++;
        }
        
        if(s[i]=='-'){
                flag=-1;
            i++;
            }
        else if(s[i]=='+'){
            i++;
        }
        while(i<n && (s[i]>='0' && s[i]<='9')){
            int digit=+int(s[i]-48);
            if (number > (2147483647 - digit) / 10) {
                return (flag == 1) ? 2147483647 : -2147483648;
    }


                number=number*10+ digit;

    
            
            i++;


        }
        if(flag==-1){
                number*=-1;
        }

            return number;

        
    }
};