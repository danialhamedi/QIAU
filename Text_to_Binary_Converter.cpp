#include<iostream>
#include<vector>
using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main()
{
  vector<char> kalame (3);
  for(int i=0;i<3;i++)
  {
    cin >> kalame[i];
  }
  for(int i =0;i<3;i++)
  {
    cout << 0 ;
    decToBinary(int (kalame[i]));
    cout << "\n";
  }



}
