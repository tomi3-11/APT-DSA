#include <iostream>
using namespace std;

class Stack{
    private:
        int myStack[10];
        int top;

    public:
        Stack(){
            top = 0;
        }

        void insert(int i){
            myStack[++top] = i;
        }

        int peek(){
            return myStack[top];
        }

        int pop(){
            return myStack[top--];
        }
};

int main(){
    Stack s1;
    s1.insert(24);
    s1.insert(98);
    s1.insert(54);
    s1.insert(32);
    s1.insert(78);
    cout << s1.peek() << endl;
    cout << s1.pop() << endl;
    cout << s1.peek() << endl;
    cout << s1.pop() << endl;
    s1.insert(44);
    cout << s1.peek() << endl;
    s1.insert(66);
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.pop() << endl;
    cout << s1.peek() << endl;

    return 0;
}
