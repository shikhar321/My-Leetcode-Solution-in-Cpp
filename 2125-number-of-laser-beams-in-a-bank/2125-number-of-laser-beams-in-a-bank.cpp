class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(int i = 0; i<bank.size(); i++) {
            int count1 = 0;
            for(int j = 0; j<bank[i].size(); j++) {
                if(bank[i][j] == '1')   count1++;
            }
            if(count1 > 0)  v.push_back(count1);
        }
        int answer = 0;
        if(v.size() > 0){
        for(int i = 0; i<v.size()-1; i++) {
            cout<<v[i]<<endl;
            answer += v[i]*v[i+1];
        }
        return answer;
        }
        return 0;
    }
};