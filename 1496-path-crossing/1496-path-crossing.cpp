class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_map<string, int> mp;
        mp["0.0"]++;
        int a = 0, b = 0;
        string dot = ".";
        for(int i = 0; i<path.size(); i++) {
            if(path[i] == 'N'){
                b++;
                string temp1 = to_string(a);
                string temp2 = to_string(b);
                
                if(mp.find(temp1+dot+temp2) != mp.end())
                    return true;
                else
                    mp.insert({temp1+dot+temp2, 1});
            }
            else if(path[i] == 'S'){
                b--;
                string temp1 = to_string(a);
                string temp2 = to_string(b);
                if(mp.find(temp1+dot+temp2) != mp.end())
                    return true;
                else
                    mp.insert({temp1+dot+temp2, 1});
            }
            else if(path[i] == 'E'){
                a++;
                string temp1 = to_string(a);
                string temp2 = to_string(b);
                if(mp.find(temp1+dot+temp2) != mp.end())
                    return true;
                else
                    mp.insert({temp1+dot+temp2, 1});
            }
            else if(path[i] == 'W'){
                a--;
                string temp1 = to_string(a);
                string temp2 = to_string(b);
                if(mp.find(temp1+dot+temp2) != mp.end())
                    return true;
                else
                    mp.insert({temp1+dot+temp2, 1});
            }
        }
        return false; 
    }
};