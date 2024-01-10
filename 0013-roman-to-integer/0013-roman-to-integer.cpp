class Solution {
public:
    int romanToInt(string s) {
    if (s.empty()) {
        return 0;
    }
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
    int count = 0;
    for(int i=0;i<s.length();i++){
        if(i< s.length() - 1 && m[s[i]] < m[s[i + 1]]){
            count=count- m[s[i]];
        }
        else{
            count=count+m[s[i]];
        }
    }
    return count;
    }
};