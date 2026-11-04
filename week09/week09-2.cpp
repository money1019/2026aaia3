//week09-2.cpp 學習計畫 Matrix 第4題
//LeetCode 73. Set Matrix Zeroes
//把0的直行 橫行 都射程0 而且void不用return
//in place 直接把修改的結果改在matrix裡面
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M=matrix.size(),N=matrix[0].size();//長寬
        vector<int>left(M);//左邊的對照表 M對應i
        vector<int>up(N);//上面的對照 N對應j
        for(int i=0;i<M;i++){
                for(int j=0;j<N;j++){
                        if(matrix[i][j]==0){
                            left[i]=1;
                            up[j]=1;
                        }
                }
        }//兩組迴圈不能合起來
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(left[i]==1||up[j]==1)matrix[i][j]=0;
            }
        }
    }
};
