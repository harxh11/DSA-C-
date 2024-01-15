class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> map;
        for(int i = 0; i < matches.size(); i++){
            map[matches[i][1]]++;
            if(!map[matches[i][0]]){
                map[matches[i][0]] = 0;
            }
        }   
        vector<int> noLost;
        vector<int> oneLost;
        vector<vector<int>> ans;
        for(auto i = map.begin(); i != map.end(); i++){
            if(i -> second == 0){
                noLost.push_back(i -> first);
            }
            else if(i -> second == 1){
                oneLost.push_back(i -> first);
            }
        }
        sort(noLost.begin(), noLost.end());
        sort(oneLost.begin(), oneLost.end());
        ans.push_back(noLost);
        ans.push_back(oneLost);
        return ans;
    }
};