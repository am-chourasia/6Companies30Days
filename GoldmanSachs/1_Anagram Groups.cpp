class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        unordered_map<string, int> mapping; // string with the index in the answer array
        vector<vector<string>> ans;
        
        for(int i = 0; i < string_list.size(); i++){
            string str = string_list[i];
            sort(str.begin(), str.end());
            if(mapping.count(str) != 0) { // if its anagram is already present;
                int index = mapping[str];
                ans[index].push_back(string_list[i]);
            }
            else {
                mapping[str] = ans.size();
                ans.push_back(vector<string>({string_list[i]}));
            }
        }
        
        return ans;
    }
};