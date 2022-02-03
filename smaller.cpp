#include <iostream>
using namespace std;

int main(){
  int a,b;
  cout << "Please enter in an integer: " << endl;
  cin >> a;
  cout << "Please enter in another integer: " << endl;
  cin >> b;

  if (a <= b){
    cout << "The smaller of the two is: " << a << endl;
  }
  else if (b <= a){
    cout << "The smaller of the two is: " << b << endl;
  }






  return 0;
}