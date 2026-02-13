class Solution {
public:
    bool isValid(string s) {
        vector <char> st;

        for (int i = 0; i<s.size(); i++){
            char ch = s[i];

            if (ch == '(') st.push_back(')');
            else if (ch == '[') st.push_back(']');
            else if (ch == '{') st.push_back('}');

            else{
                if (st.empty() || st.back() != ch) return false;
                st.pop_back();
            }
            
        }

        return st.empty();
    }
};