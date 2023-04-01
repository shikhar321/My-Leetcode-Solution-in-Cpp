class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map <int,int> row;
        unordered_map <int,int> col;
        // Storing index in hashmap for zeros
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }    
        }
        // Altering values based on row is present inside hashmap or not
        for(int i=0;i<matrix.size();i++){
            if(row.find(i)!=row.end()){
                for(int j=0;j<matrix[i].size();j++){
                    matrix[i][j] = 0;
                }
            }
        }
        // Transversing column wether zero is present or not
        for(auto x:col){
            int tmp = x.first;
            for(int i =0;i<matrix.size();i++){
                matrix[i][tmp] = 0;
            }
        }
    }
};