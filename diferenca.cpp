#import <iostream>
#import <math.h>
using namespace std;

int main() {
  int a,b,c,d,s1,s2,diferenca;
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;
  s1 = a * b;
  s2 = c * d;
  diferenca = s1 - s2;
  cout << "DIFERENCA = " << diferenca << endl;
  return 0;
}
