#include <iostream>
using namespace std;
int addition(int a,int b){
    int c;
    c=a+b;
    return c;
}
int subtraction(int a, int b){
    int c;
    c=a-b;
    return c;
}
int main(){
    int a,b;
    string choice;
    cout<<"Enter the first number" <<endl;
    cin>>a;
    cout<<"Enter the second number" <<endl;
    cin>>b;
    cout<<"Subtraction or addition?" <<endl;
    cin>>choice;
    if (choice == "addition"){
        int c = addition(a,b);
        cout<<c;
    }
    else if (choice == "subtraction"){
        int c = subtraction(a,b);
        cout<<c;
    }
    else {
        cout<<"Choose between subtraction and addition";
    }
    
    return 0;
}

#include <iostream>
using namespace std;

class student{
    private:
   int number;
   string name;
   
   public:
   void insert(){
       cout<<"Enter student number" <<endl;
       cin>>number;
       cout<<"Enter student namer" <<endl;
       cin>>name;
   }
   void display(){
       cout<<"Student number: "<<number <<endl <<"Student name: " <<name <<endl;
   }
};

int main() {
student s1, s2;
s1.insert();
s2.insert();
s1.display();
s2.display();
    return 0;
}