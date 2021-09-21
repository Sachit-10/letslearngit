
#include<bits/stdc++.h>
using namespace std;

int main()
{
  //fast I/O
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int a = 0,b = 1,n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
      cout << a <<" ";
      int sum = a + b;
      a = b;
      b = sum;
  }

  return 0;
}
