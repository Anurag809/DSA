class Solution {
private:
    bool valid(char c){
        if((c>='a'&& c<='z') || (c<='9'&&c>='0') || (c<='Z'&&c>='A')){
            return true;
        }
        return false;
    }

    char toLowerCase(char ch){
        if((ch>='a'&&ch<='z') || (ch<='9'&&ch>='0')){
            return ch;
        }else{
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string s){
        int st = 0;
        int en = s.length()-1;
        while(st<=en){
            if( toLowerCase( s[st] ) != toLowerCase( s[en] )){
                return false;
            }
            else{
                st++;
                en--;
            }
        }
        return true;
    }
public:
    bool isPalindrome(string s) {
        // remove unnecessary characters
        string temp = "";
        for(int j = 0; j<s.length(); j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }

        // convert to lowercase
        for(int j = 0;j<temp.length();j++){
            temp[j] = toLowerCase(temp[j]);
        }

        // check palindrome
        return checkPalindrome(temp);
    }
};