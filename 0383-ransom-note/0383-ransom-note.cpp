class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ramsome(26);
        vector<int> mag(26);
        for(int i=0 ; i<26 ; i++){
            ramsome[i]=0;
        }
        for(int i=0 ; i<26 ; i++){
            mag[i]=0;
        }
        for(int i=0 ; i<magazine.size();  i++){
            mag[magazine[i]-'a']++;
        }
        for(int i=0 ; i<ransomNote.size();  i++){
            ramsome[ransomNote[i]-'a']++;
        }
        for(int i=0 ; i<26;  i++){
            if(ramsome[i]>mag[i]){
                return false;
            }
        }
        return true;
        
    }
};