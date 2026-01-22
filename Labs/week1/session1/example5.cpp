// This compares 3 numbers and see which one is bigger

#include <iostream>
using namespace std;

int main(){
  int a, b, c;

  for (int i = 0; i < 3; i++){
      cout << "Enter the first number: " << endl;
      cin >> a;
      cout << "Enter the second number: " << endl;
      cin >> b;
      cout << "Enter the third number: " << endl;
      cin > c;

      if (a > b && a > c){
          cout << a << " is the biggest." << endl;
      } else if (b > a && b > c){
          cout << b;
      } else if (c > a && c > b{
          cout << c;
      } else {
      	  cout << "Two of them might be equal.";
      }
  }

  return 0;

}
