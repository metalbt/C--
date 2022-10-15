#include <math.h>
#include <iomanip> 
#include <iostream>
using namespace std;

int main() {
  double a,b,c,npa,npb,npc,sp,media,snpc;
  cin >> a;
  cin >> b;
  cin >> c;
  npa = a * 2;
  npb = b * 3;
  npc = c * 5;
  snpc = npa + npb + npc;
  sp = 2 + 3 + 5;
  media = snpc / sp;
  cout << "MEDIA = "  << setprecision(1) << fixed << media << endl;
  return 0;
  }
