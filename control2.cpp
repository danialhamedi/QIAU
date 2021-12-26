#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int num;
  cin >> num;
  vector<int> nums (num);
  for(int i=0;i<num;i++)
  {
    cin >> nums[i];
  }
  for(int i = 0 ;i<num;i++)
  {
   if(nums[i] % 2 == 0)
   {
     nums[i] = nums[i] * 2;
   }
   else
   {
     nums[i]= nums[i] + 2;
   }
  }
  for(int i = 0 ;i<num;i++)
  {
   cout << nums[i];
  }

}
