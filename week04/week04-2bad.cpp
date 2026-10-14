///week04-2bad這個程式是對的
///2011年後才能用他,所以要改一下設定
///week03考試題目
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

int main()
{
	vector<int>a;
	int now;
	for(int i=0;i<10;i++){
		cin >> now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int num:a){///code blocks設定出錯永遠跑不出來
		if(num==now) ans++;
	}
	printf("%d\n",ans);
}
