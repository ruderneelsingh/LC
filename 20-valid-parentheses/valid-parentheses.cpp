#include <string>
#include <stack>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        std::unordered_map<char, char> mapping = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for (char c : s) { 
            if (mapping.find(c) != mapping.end()) {
                char topElement = st.empty() ? '#' : st.top();
                if (!st.empty()) {
                    st.pop();
                }
                
                if (topElement != mapping[c]) {
                    return false;
                }
            } else {
                st.push(c);
            }
        } 
        
        return st.empty();
    }
};