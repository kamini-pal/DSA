#include <string>
using namespace std;

class Solution {
public:
    bool match(string& s, int si, string& p, int pi) {
        // base
        if (si == s.size() && pi == p.size()) {
            return true;
        }
        if (si == s.size() && pi < p.size()) {
            while (pi < p.size()) {
                if (p[pi] != '*')
                    return false;

                pi++;
            }
        }
        return true;
    }
    // single char matching
    if (s[si] == p[pi] || p[pi] == '?') {
        return match(s, si + 1, p, pi + 1);
    }
    if (p[pi] == '*') {
        // treat empty or null
        bool caseA = match(s, si, p, pi + 1);
        bool caseB = match(s, si + 1, p, pi);
        return caseA || caseB;
    }
    // char do not match
    return false;
    bool isMatch(string s, string p) {
        int si = 0;
        int pi = 0;
        return match(s, si, p, pi);
    }
};
