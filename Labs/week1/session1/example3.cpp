Example on addition
// This adds two numbers, you can implement other operation from here, ("-", "*", "/")

#include <iostream>
using namespace std;

int main(){
  int a,b; 
  cout<<"Enter the first number" <<endl;
  cin>>a;
  cout<<"Enter the sec number" <<endl;
  cin>>b;
  cout<< a + b;
}


#include <iostream>
using namespace std;

int main(){
  int a,b;
  for( int i=0; i<3; i++){
      cout<<"Enter the first number" <<endl;
      cin>>a;
      cout<<"Enter the sec number" <<endl;
      cin>>b;

      if (a>b){
          cout<<a;
      } else if (b>a){
          cout<<b;
      } else {
          cout<<"They are equal";
      }
  }

  return 0;

}
