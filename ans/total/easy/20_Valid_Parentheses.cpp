class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(!st.empty()){
                char top = st.top();
                if((top == '{' && top[c] == '}') || (top == '[' && c == ']') || (top == '(' && c == ')')){
                    st.push(c);
                }
                else{
                    return false;
                }
            }
        }
    }
};