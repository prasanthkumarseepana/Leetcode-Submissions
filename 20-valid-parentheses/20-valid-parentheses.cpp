class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
        
        for(int i=0;i<s.size();i++) {//Iterating input string
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);//If opening bracket, push into stack
            } else {
                if (st.size()==0)return false;//if the stack is empty, nothin to close
                if (s[i]==')'){
                    if (st.top()!='(')return false;//if the top element!=iterator element
                    else st.pop();//if equal,remove from stack
                }
                if (s[i]=='}'){
                    if (st.top() != '{')return false;
                    else st.pop();
                }
                if (s[i]==']') {
                    if (st.top() != '[')return false;
                    else st.pop();
                }
            }
        }
        
        if (st.size()==0)return true;//If stack emptied then fine
        return false;
    }
};