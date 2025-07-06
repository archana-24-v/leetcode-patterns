// Given a string s consisting only of characters a, b and c.

// Return the number of substrings containing at least one occurrence of all these characters a, b and c.

// Input: s = "abcabc"
// Output: 10
// Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 



class Solution {
    public:
        int numberOfSubstrings(string s) {
            int n = s.size();
            int l = 0, r= 0, ans = 0;
            int m[3] = {-1, -1 , -1};
            while(r<n){
                m[s[r] - 'a'] = r;
                if(m[0]!= -1 && m[1] != -1 && m[2]!= -1){
                    int mn = min({m[0], m[1], m[2]});
                    ans +=(mn+1);
                }
                r++;
            }
            
            return ans;
        }
    };