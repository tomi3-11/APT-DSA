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

        int size(){
            Link *pcurrent = phead;
            int counter = 0;
            while(pcurrent != NULL){
                counter += 1;
                pcurrent=pcurrent->pnext;
            }
            // int sizeNow = cout << counter << endl;
            return counter;
        }
        int averageAge(){
            Link *pcurrent = phead;
            int sum = 0;
            while (pcurrent != NULL){
                // if (pcurrent->name == key){
                //     cout << pcurrent->name << " Found" << endl;
                //     return 0;
                // }
                sum += pcurrent->age;
                pcurrent=pcurrent->pnext;
            }
            int average = sum / size();
            cout << "The average: " << average << endl;
            return 0;
        }
        
        void tallestPerson(){
            if(phead == NULL){
                cout << "List is empty" << endl;
                return;
            }
        
            Link *pcurrent = phead;
            Link *tallest = phead;
        
            while(pcurrent != NULL){
                if(pcurrent->height > tallest->height){
                    tallest = pcurrent;
                }
                pcurrent = pcurrent->pnext;
            }

            cout << "Tallest Person: ";
            tallest->displayLink();
            cout << endl;
        }
        
    void above30(){
        Link *pcurrent = phead;
    
        while(pcurrent != NULL){
            if(pcurrent->age > 30){
                pcurrent->displayLink();
            }
            pcurrent = pcurrent->pnext;
        }
    
        cout << endl;
    }
    
    void removeErrors(){
        while(phead != NULL && (phead->height > 3 || phead->height < 0.3)){
            phead = phead->pnext;
        }
    
        Link *pcurrent = phead;
    
        while(pcurrent != NULL && pcurrent->pnext != NULL){
            if(pcurrent->pnext->height > 3 || pcurrent->pnext->height < 0.3){
                pcurrent->pnext = pcurrent->pnext->pnext;
            } else {
                pcurrent = pcurrent->pnext;
            }
        }
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
    l1.averageAge();
    l1.tallestPerson();
    l1.above30();
    l1.removeErrors();

    return 0;

}


		

