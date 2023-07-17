class Solution {
public:
 vector<string> removeAnagrams(vector<string>& words) {
        string prev = "";
        vector<string> li;
        for (int i = 0; i < words.size(); i++) {
            string curr = words[i];
            sort(curr.begin(), curr.end());
            if (curr != prev) {
                li.push_back(words[i]);
                prev = curr;
            }
        }
        return li;
    }


};