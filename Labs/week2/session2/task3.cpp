#include <iostream>
using namespace std;

class scores{
    private:
    int c1[5];
    
    public:
    void insert(){
        c1[0]=29;
        c1[1]=11;
        c1[2]=78;
        c1[3]=56;
        c1[4]=25;
    }
    void display(){
        for (int i=0; i<=5; i++){
            cout<<c1[i] <<endl;
        }
    }
};
int main() {
    // Inserting and display contents of the array
    scores s1;
    s1.insert();
    s1.display();

    return 0;
}
