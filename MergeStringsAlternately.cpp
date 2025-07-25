#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string FinalWord = "";

        int i = 0;
        int j = 0;
        int counter = 0;

        while (counter < word1.length() && counter < word2.length()){
            FinalWord += word1[i];
            FinalWord +=word2[j];
            i++;
            j++;
            counter++;
        }

        if (word1.length() > word2.length()){
            for (i = i; i < word1.length(); ++i)
                FinalWord += word1[i];
        }
        if (word2.length() > word1.length()){
            for (j = j; j < word2.length(); ++j) {
                FinalWord += word2[j];
            }
        }
        return FinalWord;
    }
};