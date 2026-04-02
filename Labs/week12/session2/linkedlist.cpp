// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Link{
    public:
        string item;
        double cost;
        Link *pnext;
        
        Link(string i, double c){
            item=i;
            cost=c;
            pnext=NULL;
        }
        
        void displayLink(){
            cout << "{" << item << ", " << cost << "}" << endl;
        }
};

class LinkedList{
    private:
        Link *pfirst;
        Link *plast;
        
    public:
        LinkedList(){
            pfirst=NULL;
            plast=NULL;
        }
        
        void insert(string item, double cost){
            Link *newLink = new Link(item, cost);
            newLink->pnext = pfirst;
            pfirst = newLink;
        }
        
        void insertLast(string item, double cost){
            Link *newLink = new Link(item, cost);
            if (pfirst==NULL){
                pfirst = newLink;
            } else {
                plast->pnext = newLink;
                plast = newLink;
            }
        }
        
        void display(){
            Link *pcurrent = pfirst;
            while(pcurrent != NULL){
                pcurrent->displayLink();
                pcurrent=pcurrent->pnext;
            }
        }
        
        void deleteLink(){
            pfirst = pfirst->pnext;
        }
        
        void dequeue(){
            Link *pcurrent = pfirst;
            Link *pprevious = NULL;
            
            while(pcurrent->pnext != NULL){
                pprevious = pcurrent;
                pcurrent=pcurrent->pnext;
            }
            pprevious->pnext = NULL;
        }
        
        void search(){
            string key;
            cout << "Enter an item to search for: ";
            cin >> key;
            
            Link *pcurrent = pfirst;
            while (pcurrent->item != key){
                if (pcurrent->pnext == NULL){
                    cout << key << " Not Found."<< endl;
                    return;
                } else {
                    pcurrent = pcurrent->pnext;
                }
            }
            cout << "yay!! " << key << " Found"<< endl;
        }
        
        void deleteItem(){
            string key;
            cout << "Enter an item to delete: ";
            cin >> key;
            
            Link *pcurrent = pfirst;
            Link *pprevious = pfirst;
            
            while (pcurrent->item != key){
                if (pcurrent->pnext == NULL){
                    cout << key << " Not found."<<endl;
                    return;
                } else {
                    pprevious = pcurrent;
                    pcurrent = pcurrent->pnext;
                }
            }
            
            if (pcurrent == pfirst){
                pfirst = pfirst->pnext;
            } else {
                pprevious->pnext = pcurrent->pnext;
                delete pcurrent;
            }
            cout << "Deleted "<< key << endl;
        }
        
        void orderedInsert(string item, double cost){
            Link *newLink = new Link(item, cost);
            Link *pprevious = NULL;
            Link *pcurrent = pfirst;
            
            while (pcurrent != NULL && item > pcurrent->item){
                pprevious = pcurrent;
                pcurrent = pcurrent->pnext;
            }
            
            if (pprevious == NULL){
                pfirst = newLink;
            } else {
                pprevious->pnext = newLink;
                newLink->pnext = pcurrent;
            }
        }
        
        void bubbleSort(){
            for(int i = 0; i<4; i++){
                Link *pcurrent = pfirst;
                Link *pafter = pcurrent->pnext;
                for (int j = 0; j < 4-i-1; j++){
                    if (pcurrent->cost > pafter->cost){
                        double tempCost = pcurrent->cost;
                        pcurrent->cost = pafter->cost;
                        pafter->cost = tempCost;
                        
                        string tempItem = pcurrent->item;
                        pcurrent->item = pafter->item;
                        pafter->item = tempItem;
                    }
                    pcurrent = pafter;
                    pafter = pafter->pnext;
                }
            }
        }
};

int main() {
    // Write C++ code here
    // cout << "Try programiz.pro";
    LinkedList l1;
    l1.insert("Milk", 50.06);
    l1.insert("Shoe", 700.00);
    l1.insert("Lotion", 540.00);
    l1.insert("Bread", 150.16);
    // cout << "Before deleting"<< endl;
    // l1.display();
    // l1.deleteLink();
    // l1.dequeue();
    // cout << endl;
    // cout << "After deleting"<< endl;
    // l1.display();
    
    // Queue implementation
    // l1.insertLast("Ram", 2003.89);
    // l1.display();
    
    // Linear Search
    // l1.search();
    // l1.deleteItem();
    // l1.orderedInsert("Node", 27000.0);
    // l1.orderedInsert("Milk", 50.06);
    // l1.orderedInsert("Shoe", 700.00);
    // l1.orderedInsert("Lotion", 540.00);
    // l1.orderedInsert("Bread", 150.16);
    l1.display();
    
    cout << "After sorting"<< endl;
    l1.bubbleSort();
    l1.display();

    return 0;
}
