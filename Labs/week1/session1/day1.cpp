example 1
#include<iostream>
using namespace std;
int main(){
    cout<<"Hello";
}

//Example on input
#include<iostream>
using namespace std;
int main(){
   string x;
   cout<<"Enter a word" <<endl;
   cin>>x;
    cout<<x;
}

//Example on addition
#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"Enter the first number" <<endl;
  cin>>a;
  cout<<"Enter the sec number" <<endl;
  cin>>b;
  cout<< a + b;
}

//Example on addition
#include<iostream>
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
  }
  else if (b>a){
      cout<<b;
  }
  else {
      cout<<"They are equal";
  }}
}