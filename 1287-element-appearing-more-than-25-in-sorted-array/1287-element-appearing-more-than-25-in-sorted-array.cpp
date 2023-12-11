class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int len= arr.size();
        int qtr= len/4;
        int count=1;
       
        for(int i=1;i<len;i++){
            if(arr[i]== arr[i-1]){
                count++;
            }
            else{
                count=1;
            }
            if(count > qtr){
                return arr[i];
            }
          
            
        }
        return arr[len-1];
    }
};