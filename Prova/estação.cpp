#include <bits/stdc++.h>
using namespace std;

int main ()
{
  int vh;
  int h, hmax;
  double tmax, tmin, dt, dtmax;

  
  cin >> vh;
  for (int x = 0; x < vh; x++)
  {
    cin >> h >> tmax >> tmin;
    dt = tmax - tmin;

    if (dt > dtmax)
    {
      dtmax = dt;
      hmax = h;
    }
  }  

  cout << hmax << endl; 

  return 0;
  
}