class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        bool flag = false;
        int size1 = word1.size()-1;
        int size2 = word2.size()-1;
        int mini = min(size1, size2);
        if(size1 != size2)  flag = true;
        int i = 0, j = 0;
        while(i<=mini && j<=mini) {
            ans += word1[i];
            i++;
            ans += word2[j];
            j++;
        }
        if(flag == true){
            if(size1 > size2) {
                for(int k = i; k<=size1; k++) {
                    ans += word1[k];
                }
            }
            else{
                for(int k = i; k<=size2; k++) {
                    ans += word2[k];
                }
            }
        }
        return ans;
    }
};