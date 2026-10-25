class Solution {
public:
    string nor(string st){
        unordered_map<char,char>m;
        char s='a';
        string ans="";
        for(int i=0;i<st.length();i++){
            if(m.find(st[i])==m.end()){
                m[st[i]]=s;
                s++;
            }
            ans+=m[st[i]];
        }
        return ans;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>l;
        string p=nor(pattern);
        for(int i=0;i<words.size();i++){
            string d=words[i];
            string h=nor(d);
            if(h.compare(p)==0){
                l.push_back(d);
            }
        }
        return l;
    }
};