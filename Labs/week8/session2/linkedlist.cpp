#include <iostream>
using namespace std;

class Link{
	public:
		string name;
        int age;
		double height;
		Link *pnext;

        Link(string n, int a, double h) {
            name = n;
            age = a;
            height = h;
        }

        void displayLink(){
            cout << "{" << name << ": " << age << ": " << height << "} -> ";
        }

};

class LinkedList{
    private:
        Link *phead;

    public:
        LinkedList(){
            phead = NULL;
        }

        void insert(string name, int age, double height){
            Link *newLink = new Link(name, age, height);
            newLink->pnext = phead;
            phead = newLink;
        }

        void display(){
            Link *pcurrent = phead;
            while(pcurrent != NULL){
                pcurrent->displayLink();
                pcurrent=pcurrent->pnext;
            }
            cout << endl;
        }

        int search(string key){
            Link *pcurrent = phead;
            while (pcurrent != NULL){
                if (pcurrent->name == key){
                    cout << pcurrent->name << " Found" << endl;
                    return 0;
                }
                pcurrent=pcurrent->pnext;
            }
            cout << key << " Not found" << endl;
            return 0;
        }

        // Delete function
        void pop(){
            phead=phead->pnext;
        }

        void size(){
            Link *pcurrent = phead;
            int counter = 0;
            while(pcurrent != NULL){
                counter += 1;
                pcurrent=pcurrent->pnext;
            }
            cout << counter << endl;
        }
        int averageAge(int key){
            Link *pcurrent = phead;
            int sum = 0;
            while (pcurrent != NULL){
                if (pcurrent->name == key){
                    cout << pcurrent->name << " Found" << endl;
                    return 0;
                }
                pcurrent=pcurrent->pnext;
            }
            cout << key << " Not found" << endl;
            return 0;
        }


};

int main(){
    LinkedList l1;
    l1.insert("Fred", 34, 1.7);
    l1.insert("Sue", 27, 1.2);
    l1.insert("Joe", 48, 1.4);
    l1.insert("Zoe", 30, 1.3);
    l1.display();
    l1.pop();
    l1.display();
    l1.search("Joe");
    l1.size();

    return 0;

}


		
