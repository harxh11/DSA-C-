class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> map1;
        unordered_map<char, int> map2;
        vector<int> word1L;
        vector<int> word2L;
        vector<int> word1F;
        vector<int> word2F;
        for(int i = 0; i < word1.length(); i++){
            map1[word1[i]]++;
        }
        for(int i = 0; i < word2.length(); i++){
            map2[word2[i]]++;
        }
        for(auto i = map1.begin(); i != map1.end(); i++){
            word1L.push_back(i -> second);
            word1F.push_back(i -> first);
        }
        for(auto i = map2.begin(); i != map2.end(); i++){
            word2L.push_back(i -> second);
            word2F.push_back(i -> first);
        }
        sort(word1L.begin(), word1L.end());
        sort(word2L.begin(), word2L.end());
        sort(word1F.begin(), word1F.end());
        sort(word2F.begin(), word2F.end());
        if(word1F == word2F){
            return word1L == word2L;
        } else {
            return false;
        }
        
    }
};