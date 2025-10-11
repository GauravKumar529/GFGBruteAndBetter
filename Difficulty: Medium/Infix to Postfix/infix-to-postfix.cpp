#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prec(char ch) {
        if (ch == '^') return 3;
        else if (ch == '/' || ch == '*') return 2;
        else if (ch == '+' || ch == '-') return 1;
        return -1;
    }

    bool isRightAssociative(char ch) {
        return ch == '^';
    }

    string infixToPostfix(string& s) {
        string res = "";
        stack<char> st;

        for (char c : s) {
            if (c == ' ') continue; // skip spaces

            if (isalnum(c)) res += c;
            else if (c == '(') st.push(c);
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
            }
            else {
                while (!st.empty() && st.top() != '(' &&
                       (prec(st.top()) > prec(c) ||
                       (prec(st.top()) == prec(c) && !isRightAssociative(st.top())))) {
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        return res;
    }
};
