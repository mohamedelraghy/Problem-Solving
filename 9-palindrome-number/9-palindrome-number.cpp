class Solution {
public:
    bool isPalindrome(int x) {
        
        string num = to_string(x);
        
            for(int i = 0; i < num.size() / 2; i++){
                if(num[i] != num[num.size() - i - 1])return false;
            }
            return true;
    }
};