class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char a = 'a';
        string answer = "";
        for(int i = 0; i<key.size(); i++) {
            if(key[i] == ' ') {
                continue;
            }
            else if(mp.find(key[i]) == mp.end()) {
                mp.insert({key[i], a});
                a++;
            }
        }
        // for(auto it: mp) {
        //     cout<<it.first<<":"<<it.second<<endl;
        // }
        for(int i = 0; i<message.size(); i++) {
            if(message[i] == ' ') {
                answer += message[i];
            }
            else{
                answer += mp[message[i]];
            }
        }
        return answer;
    }
};