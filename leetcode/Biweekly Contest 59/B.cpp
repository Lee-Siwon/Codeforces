class Solution {
public:
    int abs(int a){
        return a<0?-a:a;
    }
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long answer=0;
        int min=10000000;
        int count=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                if(matrix[i][j]<0){
                    count++;
                    answer+=-matrix[i][j];
                }
                else{
                    answer+=matrix[i][j];
                }
                if(min>abs(matrix[i][j]))min=abs(matrix[i][j]);
            }
        }
        if(count%2==1){
            answer-=min*2;
        }
        return answer;
    }
};
