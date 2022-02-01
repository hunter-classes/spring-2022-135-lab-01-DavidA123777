#include <iostream>
using namespace std;



int main(){
  int year;
  int month;
  cout << "Enter year: " << endl;
  cin >> year;
  cout << "Enter month: " << endl;
  cin >> month;
  int leap;
  int days;

  if (year % 4 != 0){
    leap = 0;
  }
  else if (year % 100 != 0){
    leap = 1;
  }
  else if (year % 400 != 0){
    leap = 0;
  }
  else{
    leap = 1;
  }


  if (month == 1){
    days = 31;
  }
  else if ((month == 2) && (leap == 0)){ 
    days = 28;
    }
  else if ((month == 2) && (leap == 1)){ 
    days = 29;
    }
  else if ((month == 3)){ 
    days = 31;
    }
  else if (month == 4){ 
    days = 30;
    }
  else if (month == 5){ 
    days = 31;
    }
  else if (month == 6){ 
    days = 30;
    }
  else if (month == 7){ 
    days = 31;
    }
  else if (month == 8){ 
    days = 31;
    }
  else if (month == 9){ 
    days = 30;
    }
  else if (month == 10){ 
    days = 31;
    }
  else if (month == 11){ 
    days = 30;
    }
  else if (month == 12){ 
    days = 31;
    }
  cout << days << endl;
 
 
  





  return 0;
}