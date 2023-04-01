class Solution {
public:
    int reverse(int x) {
        string makestring = to_string(x);
        std::reverse(makestring.begin(), makestring.end());
        try {
            long long int finalnumanswer = stoi(makestring);
            if(makestring[makestring.size()-1] == '-') {
                return -1*finalnumanswer;
        }
            return finalnumanswer;
        } 
        catch (...) {
            return 0;
        }
        return 100;
        
    }
};