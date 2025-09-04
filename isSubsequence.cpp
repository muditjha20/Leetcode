/*
Understand - Check if S is a substring of T

Match - 2 pointers

Plan - 1. Set pointer i for t and j for S.
2. Loop thru T and check if each letter of S matches any letter in T. IF yes move j  forward. if not, continue.
3. If J eventually reached the end of S then S is a substring of T. if yes return true.
4. If not return false.
*/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if ((s == "") && (t == ""))
            return true;
        int j = 0;
        for (int i = 0; i < t.size(); i++){
            if (s[j] == t[i])
                j++; 
            if (j == s.length())
                return true;
        }
        return false;
    }
};
