class Solution {
public:
    bool isValid(string S) {
        stack<char> brackets;
        for(char C:S ){
            if(C == '(' || C== '{' || C=='['){
                brackets.push(C);
            }
            else{
                if(brackets.empty()){
                    return false;
                }
                char openBracket = brackets.top();
                brackets.pop();
                if((C == ')' && openBracket != '(') || (C=='}' && openBracket != '{') || (C==']' && openBracket != '[')){
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};