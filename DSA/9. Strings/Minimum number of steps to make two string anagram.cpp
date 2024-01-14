class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> map;
        for(int i = 0 ; i < s.size(); i++){
            map[s[i]]++;
        }
        int ans = 0;
        for(int i = 0; i < t.size(); i++){
            if(map[t[i]]){
                map[t[i]]--;
            } else {
                ans++;
            }
        }
        return ans;
    }
};