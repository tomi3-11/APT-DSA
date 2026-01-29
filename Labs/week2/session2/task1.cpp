#include <iostream>
using namespace std;
class employee{
    private:
    string name;
    int salary;
    int housing;
    int transport;
    int net;
    int deductions;
    public:
    void input(){
        cout<<"Enter your name :" <<endl;
        cin>>name;
        cout<<"Enter your salary: " <<endl;
        cin>>salary;
    }
    void salarycalc(){
        housing = 0.30*salary;
        transport = 0.15*salary;
        deductions = housing + transport;
        net = salary - deductions;
        cout<<net;
    }
    void display(){
       cout<<"Salary: "<<salary <<endl <<"Net salary: " <<net <<endl; 
   }
    
};
int main() {
    employee e1,e2;
    e1.input();
    e2.input();
    e1.salarycalc();
    e2.salarycalc();
    e1.display();
    e2.display();
  
    return 0;
}

