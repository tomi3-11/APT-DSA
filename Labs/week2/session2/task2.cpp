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
    employee(){
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
    }
    void display(){
       cout<<"Salary: "<<salary <<endl <<"Net salary: " <<net <<endl; 
   }
    
};
int main() {
    employee e1;
    e1.salarycalc();
    e1.display();
  employee *e2= new employee();
  e2->salarycalc();
  e2->display();
  
    return 0;
}
 
