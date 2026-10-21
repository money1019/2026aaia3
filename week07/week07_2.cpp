//week07-2.cpp 學習計畫 Simulation 第三題
//LeetCode  1275. Find Winner on a Tic Tac Toe Game
class Solution {
public: //大資料結構moves裡面放中資料結構move裡面放小資料結構int的i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3]={0};//C語言的2維陣列 裡面都是0
        int who =1;//1:A,2:B 現在輪到誰?
        string whoTable[3]={"Draw","A","B"};
        for(vector<int>move:moves){
            int i=move[0],j=move[1];
            a[i][j]=who;//要放會變動的誰
            if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&&a[0][2]==who)return whoTable[who];
            if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&&a[1][2]==who)return whoTable[who];
            if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&&a[2][2]==who)return whoTable[who];

            if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&&a[2][0]==who)return whoTable[who];
            if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[2][1]==who)return whoTable[who];
            if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[2][2]==who)return whoTable[who];

            if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[2][2]==who)return whoTable[who];
            if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]&&a[0][2]==who)return whoTable[who];
            if(who==1)who=2;//換2:B
            else who=1;//換1:A
            //myShowTable(a);暫時印出來 印完就不用在印了
        }
        //return"A";//先寫"A"會得勝
        if(moves.size()==9)return "Draw";//平手(小心有一個陷阱 等下會爆炸)
        else return"Pending";//還沒下完啦啦
    }
    void myShowTable(int a[3][3]){//我們自己寫的秀板子的程式
        for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<"\n";
        }
        cout<<"\n";
    }
};
