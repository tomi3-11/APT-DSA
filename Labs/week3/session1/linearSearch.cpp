
#include <iostream>

using namespace std;

class scores{
    private:
	int c1[5];

    public:
    	void unorderedinsert(){
		c1[0]=34;
	        c1[1]=54;
		c1[2]=56;
        	c1[3]=78;
        	c1[4]=90;
    	}

    	void orderedinsert(){
        	int y;

	        for(int i=0;i<5;i++){
            		cout<<"Enter a score: " <<endl;
            		cin>>y;

            		int j;

            		for(j=0;j<5;j++){
                		if(c1[j]>y){
                    			break;
                		}
            	}

            	for(int k=5;k>j;k--){
               		c1[k]=c1[k-1];
            	}
            	c1[j] = y;
        	}
    	}

    	void display(){
        	cout<<"These are the numbers: " <<endl;
        	for(int i=0;i<5;i++){

            cout<<c1[i] <<endl;

        }

    }

    int linearsearch(){

        cout<<"Enter the score to search for: " <<endl;

        int key;

        cin>>key;

        for(int i=0;i<5;i++){

            if(c1[i]==key){

                cout<<"Found" <<endl;

                return 0;

            }

            

        }

        cout<<"Not found" <<endl;

        return 0;

    }

    int mydelete(){

        cout<<"Enter the score to delete: " <<endl;

        int key;

        cin>>key;

        for(int i=0;i<5;i++){

            if(c1[i]==key){

                cout<<"Found" <<endl;

                for(int j=i;j<5;j++){

                    c1[j]=c1[j+1];

                }

                return 0;

            }

            

        }

        cout<<"Not found" <<endl;

        return 0;

    }

};

int main(){

    scores s;

    s.unorderedinsert();

    s.display();

    s.linearsearch();

    s.mydelete();

    s.display();

    return 0;

}


