class Solution {
public:
    bool isAnagram(string s, string t) {
        //check whether length is the same
        if(s.length() != t.length()) return false;

        //store each string into a hashmap
        unordered_map<char, int> ms;
        unordered_map<char, int> mt;
        // we increase the count (value) for each character key by 1
        for (char c : s) ms[c]++;
        for (char c : t) mt[c]++;

        //return whether one hashmap matches the other
        // we can do the comparison in one line but below is the logic -> return ms == mt;
        for (char c : s) {
            if(mt.count(c) == 0) return false;
            if(mt[c] != ms[c]) return false;
        }
        return true;

    }
};