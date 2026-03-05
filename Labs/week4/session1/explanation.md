# Stack implementation
Stacks works on the principle of first-in last-out (FILO), that means the last element or member to be added will be the first to be removed.<br>
Example: Just like a pile of plates, when 30 are piled it is almost impossible to get one from the middle, so the last one to be placed will be the first one to be taken and used.

lets see this in action:
```cpp
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
```
## Complete explanations
1. We start by adding the header file, responsible for input/output actions.
```cpp
#include <iostream>
using namespace std;

```
2. Then we start with our class called `Stack` with some intializations of the stack name, and the top index of our stack
```cpp
class Stack{
    private:
        int myStack[10];
        int top;
```
So the above code simple creates a class, then we specify our private attribute.
3. Class constructor, we are gonna create a class constructor to enable us to initialize our first attribute for the top value.
```cpp
    public:
        Stack(){
            top = 0;
        }
```
> Class constructor gets called first before any other method so our object is provided the value before any other action of where it has been used.
2. Now the methods in action.
we have the insert method taking a parameter of type integer and adding to the top of our stack
```cpp
        void insert(int i){
            myStack[++top] = i;
        }
```

Then we have the `peek()` that checks what is at the top of our stack.
```cpp
        int peek(){
            return myStack[top];
        }
```

Lastly we have the `pop()` method to remove the last item in our stack.
```cpp
        int pop(){
            return myStack[top--];
        }

```

3. Now the implementation in main. playarround with them to get a better view of how they work.
```cpp

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

```
