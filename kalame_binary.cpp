#include<iostream>
#include<vector>
using namespace std;
void decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
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
