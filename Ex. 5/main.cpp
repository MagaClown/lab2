#include <iostream>
using namespace std;

int main()
{
  int thh, thm, tm;
  cout << " Minutes to hours " << endl;
  cout << " Minutes: " << endl;
  cin >> tm;
  thm = tm % 60;
  thh = tm / 60;
  cout << tm << " minutes is " << thh << " hours and " << thm << " minutes " << endl;
  
  return 0;
}

