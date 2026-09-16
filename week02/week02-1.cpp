///week02-1.cpp 練習C++ string字串
///File-Save As存檔成cpp檔
#include<iostream>///上週教的
#include<string>///今天教的
///以前大一C語言是用char name[100];宣告麻煩
///scanf("%s",name);//讀資料也很麻煩有一堆
int main()
{
    std::cout<<"請輸入你的名字:";
    std::string name;///使用標準字串
    std::cin>>name;
    std::cout<<name<<"你好，你會用字串了";
}
