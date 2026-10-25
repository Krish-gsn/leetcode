class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>m;
        char c='a';
        for(int i=0;i<key.size();i++){
            if(key[i]!=' ' && m.find(key[i])==m.end()){
                m[key[i]]=c;
                c++;
            }
        }
        string ans="";
        for(int i=0;i<message.size();i++){
            if(message[i]==' ')
            ans=ans+" ";
            else 
            ans=ans+m[message[i]];
        }
        return ans;
    }
};