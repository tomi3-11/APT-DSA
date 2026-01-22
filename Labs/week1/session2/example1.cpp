#include <iostream>
using namespace std;

// Functions on the arithmentic operations
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
