//week04-1b
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  vector<int>a(10);
  for(int i=0;i<10;i++){
   cout>>a[i];
  }
  sort(a.begin(),a.end());
  for (int i=9;i>=0;i--){
    coutt<<a[i]<<' ';
  }
}
