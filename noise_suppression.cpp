#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int num;
  cin >> num;
  vector<float> signals (num);
  for(int i=0;i<num;i++)
  {
    cin >> signals[i];
  }
  for (int i=1;i<num;i++)
  {
    cout << ((signals[i] + signals[i-1]) / 2.00)<< "\n" ;
  }
}
