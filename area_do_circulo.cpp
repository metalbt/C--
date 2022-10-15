#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  double pi,raio,area;
  cin >> raio;
  pi = 3.14159;
  area = pow(raio, 2.0) * pi;
  cout << "A=" << setprecision(4) << fixed << area << endl;
  return 0;
}
