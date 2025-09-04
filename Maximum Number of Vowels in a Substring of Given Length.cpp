/*
Understand - we are finding the maxVowels in a substring

Match - sliding window

Plan - 
1. Make a sliding window of size k and count the vowels inside it
2. Move the window forward and if the front is a vowel, increase the number of vowels and if the back was a vowel decrease number of vowels 
3. By the end, You will have the maxVowels

Runtime - O(n)
*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int j = k-1;
        int i = 0;
        int MAX_Vovels = 0;
        int maxVovels = 0;
        for (i = 0; i <= j; i++){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                maxVovels++;
        }
         if (maxVovels >= MAX_Vovels)
            MAX_Vovels = maxVovels;

        for(i = 0; j < s.size();){
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                maxVovels--;
            i++;
            j++;
            if ((s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' ))
            maxVovels++;

            if (maxVovels > MAX_Vovels)
            MAX_Vovels = maxVovels;
        }
        return MAX_Vovels;

    }
};
