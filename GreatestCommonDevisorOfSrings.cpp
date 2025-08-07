// Understanding the problem
// Finding the largest string to divide into str 1 and str 2
// edge cases
/*
both strings are non empty
they have uppercase letters

pattern - Finding greatest common divisor but with letters not numbers

plan -

1. Check if the strings have a common factor or not

2. find the greatest common divisor of the length of both strings. This would be the length of the solution. call it n

3. return the first n letters of either string

*/


class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        // check if a common string exists
        if (str1 + str2 != str2 + str1)
            return "";

        int n = gcd(str1.length(), str2.length());

        string answer = "";
        for (int i = 0; i < n; i++){
            answer += str1[i];
        }
        return answer;
    }
};