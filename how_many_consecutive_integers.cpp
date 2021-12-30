#include<iostream>
#include <vector>
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
  int result = 0;

  for(int i = 0 ;i<num;i++)
  {
    if(nums[i] == nums[i+1] + 1 || nums[i] == nums[i+1] - 1)
    {
      result ++;
    }
  }
  cout << result;
}
