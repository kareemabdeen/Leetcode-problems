class Solution {
public:
  
bool isAnagram(string s, string t) {
    if (s.size() != t.size())
        return false;

  sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int resulOfXor = 0;
    for (int i = 0; i < s.size(); i++) {
        resulOfXor = s[i] ^ t[i]; //0
        if (resulOfXor != 0)
            return false;
    }
    return true;

}
};