#import <math.h>
#import <iomanip>
#import <iostream>
using namespace std;

int main() {
  double n1,n2,np1,np2,media,sp,snp;
  cin >> n1;
  cin >> n2;
  np1 = n1 * 3.5;
  np2 = n2 * 7.5;
  sp = 3.5 + 7.5;
  snp = np1 + np2;
  media = snp / sp;
  
  cout << "MEDIA = " << setprecision(5) << fixed << media << endl;
  return 0;
  }
