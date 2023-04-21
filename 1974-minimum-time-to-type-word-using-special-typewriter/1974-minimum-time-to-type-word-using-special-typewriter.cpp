class Solution {
public:
    int minTimeToType(string word) {
        // a b c d e f g h i j   k  l  m 
        // 1 2 3 4 5 6 7 8 9 10  11 12 13
        // n  o  p  q  r  s  t  u  v  w  x  y  z
        // 14 15 16 17 18 19 20 21 22 23 24 25 26
        int answer = 0;
        char current = 'a';
        for(int i = 0; i<word.size(); i++) {
            if(abs(word[i] - current) <= 13){
                answer += abs(word[i] - current);
                cout<<answer<<endl;
            }
            else{
                answer += 26 - abs(word[i] - current);
            }
            current = word[i];
        }
        
        return answer + word.size();
    }
};