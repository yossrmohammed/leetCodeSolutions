class Solution {
public:
    string intToRoman(int num) {
        string romanLetters[]={"M","CM","D","CD","C","XC","L","XL","X",
        "IX","V","IV","I"};

        int value[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};

        int i=0;
        string res="";
        while(i<13){
            while(num>=value[i]){
                res+=romanLetters[i];
                num=num-value[i];
            }
            i++;
        }
        return res;
    }
};