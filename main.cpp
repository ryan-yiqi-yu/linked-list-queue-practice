//FINAL EDIT .1
//

#include <iostream>
using namespace std;

class queue{
private:
    struct node{
        int value;
        node *link;
    };
    node *front = NULL;
    node *back = NULL;
    int count=0;
public:
    void EnQueue(int NewValue){
        count++;
        node *NewNode = new node;
        NewNode->value = NewValue;
        NewNode->link = NULL;
        if (IsEmpty()){
            front = NewNode;
              }
        else{
            back->link = NewNode;
        }
        back = NewNode;
    }
    
    bool IsEmpty(){
        if(front == NULL){
            return true;
        }
        else{
            return false;
        }
    }
    
    void DeQueue(){
        if (IsEmpty()){
            cout<<"ERROR, queue empty."<<endl<<endl;
        }
        else{
            cout<<"Value at front of queue: "<<front->value<<endl<<endl;
            front = front->link;
            count--;
        }
    }
    
};

int main(){
    queue test;
    test.DeQueue();
    test.EnQueue(17);
    test.DeQueue();
    test.EnQueue(69);
    test.EnQueue(420);
    test.EnQueue(666);
    test.EnQueue(9382);
    test.DeQueue();
}
