//week01-2.cpp_SOIT106_ADVENCE_001
#include <iostream>
int main()
{
	int N;
	std::cin>>N;

	int b=N,ans=0;
	while(N>0){
		ans=ans*10+N%10;
		N=N/10;

	}
	std::cout<<ans<<b+ans;//WRONG-ANSWER
	//std::cont<<b<<"+"<<ans<<"="<<b+ans<<std::end1;
	//¥¿½T
}
