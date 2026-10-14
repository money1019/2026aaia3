//week06-3.cpp 學習計畫 simulation 第二題
//LeetCode 657. Robot Return to Origin
//機器人 往上U 往下D 往左L 往右R 問是否會回到原來位置
class Solution {
public:
    bool judgeCircle(string moves) {
        //程式在中間 上面3行不要動 下面2行不要動
        int x=0,y=0;//迴圈前面xy都是0
        for(char c:moves){//week02教string及C++進階for迴圈
            if(c=='U') y++;//往上
            if(c=='D') y--;//往下
            if(c=='L') x--;//往左
            if(c=='R') x++;//往右
        }
        if(x==0 && y==0)return true;
        else return false;
    }
};
