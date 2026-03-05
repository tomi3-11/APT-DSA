#include <iostream>
using namespace std;

class Link{
	public:
		string item;
		double price;
		Link *pnext;

        Link(string i, double c) {
            item = i;
            price = c;
        }

        void displayLink(){
            cout << "{" << item << ": " << price << "} -> ";
        }

};

class LinkedList{
    private:
        Link *phead;

    public:
        LinkedList(){
            phead = NULL;
        }

        void insert(string item, double price){
            Link *newLink = new Link(item, price);
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

};

int main(){
    LinkedList l1;
    l1.insert("milk", 100.0);
    l1.insert("RAM", 1100.0);
    l1.insert("Water", 60.0);
    l1.insert("Pen", 150.0);
    l1.display();

    return 0;

}


		
