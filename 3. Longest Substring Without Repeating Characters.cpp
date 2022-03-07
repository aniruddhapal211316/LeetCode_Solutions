
// Time Complexity- O(N)
// Auxiliary Space- O(1)
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> table(256,-1);
        int start=0,result=0; 
        for(int end=0;end<s.length();end++){
            start = max(start,table[s[end]]+1);
            result = max(result,end-start+1);
            table[s[end]] = end;

        }
        return result;
    }
};