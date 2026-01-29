// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Student {
    private:
    int number;
    string name;
    
    public:
    void insert(){
        cout << "Enter student number: ";
        cin >> number;
        
        cout << "Enter name: ";
        cin >> name;
    }
    
    void display(){
        cout << "Student Number: " <<  number << endl << "Student Name: " << name << endl;
    }
};

int main() {
    Student s1, s2;
    s1.insert();
    s2.insert();
    s1.display();
    s2.display();

    return 0;
}