#include <iostream>
using namespace std;

int main()
{
  int value, tmp=0;
  cout << "Reverse order." << endl;
  cout << "Input value:" << endl;
  cin >> value;
  while(value > 0)
  {
    tmp = 10 * tmp + value % 10;
    value /= 10;
  }
  cout << "Your number:" << tmp << endl;
  return 0;
}

