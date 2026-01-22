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
