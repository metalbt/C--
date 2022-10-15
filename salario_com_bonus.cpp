#import <iostream>
#import <math.h>
#import <iomanip>
using namespace std;

int main() {
  string nome;
  double s,v,st,b;
  cin >> nome;
  cin >> s;
  cin >> v;
  b = 0.15 * v;
  st = s + b;
  cout << "TOTAL = R$ " << setprecision(2) << fixed << st << endl;
  return 0;
}  
