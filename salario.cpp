#import <iostream>
#import <math.h>
#import <iomanip>
using namespace std;

int main() {
  int num,ht;
  double vh,salario;
  cin >> num;
  cin >> ht;
  cin >> vh;
  salario = ht * vh;
  cout << "NUMBER = " << num << endl;
  cout << "SALARY = U$ " << setprecision(2) << fixed << salario << endl;
  return 0;
}
