class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans="";
        unordered_map<string, string> mp;
        for(int i=0 ; i<knowledge.size() ; i++){
            mp[knowledge[i][0]]=knowledge[i][1];
        }
        for(int i=0 ; i<s.length() ;){
            string key="";
            if(s[i]=='('){
                int j=i+1;
                while(s[j]!=')'){
                    key+=s[j];
                    j++;
                }
                i=j+1;
                if(mp.find(key) != mp.end()){
                    ans += mp[key];
                }
                else{
                    ans += '?';
                }
            }
            else{
                ans+=s[i];
                i++;
            }
            
        }
        return ans;
    }
};