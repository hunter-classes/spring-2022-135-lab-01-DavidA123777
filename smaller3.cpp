#include <iostream>
using namespace std;
int main(){
  int x,y,z;
  cout << "Please enter in the first integer: " << endl;
  cin >> x;
  cout << "Please enter in the second integer: " << endl;
  cin >> y;
  cout << "Please enter in the third integer: " << endl;
  cin >> z;

  if ((x <= y) && (x <= z)){
    cout << "The smaller of the three is " << x << endl;
  }
  else if ((y <= x) && (y <= z)){
    cout << "The smaller of the three is " << y << endl;
  }
  else if ((z <= x) && (z <= y)){
    cout << "The smaller of the three is " << z << endl;
  }
  else{
    cout << "There is a mistake " << endl;
  }




  return 0;
}