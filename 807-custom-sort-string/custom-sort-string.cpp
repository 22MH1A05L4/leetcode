class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> GD;
        string res;
        for (char c : s){
            GD[c]++;
        }
        for(char c : order){
            if(GD.find(c) != GD.end()){
                res.append(GD[c],c);
                GD.erase(c);
            }
        }
        for(auto& pair : GD){
            res.append(pair.second,pair.first);
        }
        return res;
    }
};