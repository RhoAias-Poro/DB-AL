#include<iostream>
#include<math.h>
using namespace std;

int gcd(int a, int d)
{
  if(d == 0) return a;
  else return gcd(d, a%d);
}


int main()
{
   int a, b;
   cin >> a >> b;
   int x = pow(a, 4) + 1;
   int y = pow(b, 4) + 1; 
   int re1 = gcd(x, y);
   int re2 = pow(gcd(a, b), 4);
   if( re1 ==  re2)
   {
     cout << "true" << endl;
     cout << gcd(x, y);
   }
   else cout << "false";
}
