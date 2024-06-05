// problem link
// https://leetcode.com/problems/find-common-characters/description/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> res;

        string check = words[0];

        for(char c : check){
            bool found = true;
            for(int i = 0; i< words.size();i++){
                if(words[i].find(c) == string::npos){
                    found = false;
                    break;
                }else{
                    words[i].erase(words[i].find(c), 1);
                }
            }
            if(found){
                    res.push_back(string(1, c));
                }
        }
        return res;
    }
};
