class Solution {
public:
    bool isValid(string s) {
        int l = s.length();
        int i =0;
        stack<int> st;
        while(i<l)
        {
            switch(s[i])
            {
                case '(' : st.push(1); break;
                case '[': st.push(2); break;
                case '{': st.push(3); break;
                default:
                    if(st.empty()) return false;
                    else if(s[i]==')' && st.top()==1)
                        st.pop();
                    else if(s[i]==']' && st.top()==2)
                        st.pop();
                    else if(s[i]=='}' && st.top()==3)
                        st.pop();
                    else
                        return false;
            }
            i++;
        }
        if (st.empty())
            return true;
            else return false;
    }
};
