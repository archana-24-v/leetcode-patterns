// You are visiting a farm that has a single row of fruit trees arranged from left to right. The trees are represented by an integer array fruits where fruits[i] is the type of fruit the ith tree produces.

// You want to collect as much fruit as possible. However, the owner has some strict rules that you must follow:

// You only have two baskets, and each basket can only hold a single type of fruit. There is no limit on the amount of fruit each basket can hold.
// Starting from any tree of your choice, you must pick exactly one fruit from every tree (including the start tree) while moving to the right. The picked fruits must fit in one of your baskets.
// Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
// Given the integer array fruits, return the maximum number of fruits you can pick.

// Input: fruits = [1,2,1]
// Output: 3
// Explanation: We can pick from all 3 trees.




class Solution {
public:
    int totalFruit(vector<int>& f) {
        int l =0, r = 0, ans = 0;
        map<int, int>m;
        int n = f.size();
        while(r<n){
            m[f[r]] = r;
            if(m.size()>2){
                int pos = m[f[l]];
                m.erase(f[l]);
                l = pos+1;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};