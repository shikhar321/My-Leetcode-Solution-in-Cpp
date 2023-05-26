class Solution {
public:
    int countPoints(string rings) {
        vector<int> red (10, 0);
        vector<int> blue (10, 0);
        vector<int> green (10, 0);
        int count = 0;
        for(int i = 0; i<rings.size()-1; i+=2) {
            if(rings[i] == 'B')   blue[rings[i+1] - '0'] = 1;
            if(rings[i] == 'R')   red[rings[i+1] - '0'] = 1;
            if(rings[i] == 'G')   green[rings[i+1] - '0'] = 1;
        }
        for(int i = 0; i<blue.size(); i++) {
            cout<<blue[i]<<" "<<red[i]<<" "<<green[i]<<endl;
            if(blue[i] == 1 && red[i] == 1 && green[i] == 1) count++;
        }
        return count;
    }
};