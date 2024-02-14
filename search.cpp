#include<iostream>
using namespace std;
struct Node{
    int value;
    Node *Next;
};
class QueueNode{
    private:
    Node *front,*rear;
    public:
    QueueNode()
    {
        front=NULL;
        rear=NULL;
       
    }
    bool isEmpty()
    {
        return rear ==NULL;
    }
    void enqueue(int value)
    {  Node *Series=new Node;
        Series->value=value;
        Series->Next=NULL;
        if(front==NULL)
        {
            front=rear=Series;
        }
        else
        {
            rear->Next=Series;
            rear=Series;
        }
        

    }
    int dequeue()
    {   int value;
        if(isEmpty())
        {
            cout<<"Queue is Empty can not Dequeue ..\n";
            return -1;
        }
        else{
            value=front->value;
            Node * temp=front;
            front=front->Next;
            delete temp;
            // if(front==NULL)
            //     rear=NULL;
        }
        return value;

    }
    int getfront()
    {
        return front->value;
    }
     int getrear()
    {
        return rear->value;
    }
    int size()
    {
        int counter=0;
        Node* temp=front;
        while(temp !=NULL)
        {
            counter++;
            temp=temp->Next;
        }
        return counter;
    }
    void display()
    {
        Node *temp=front;
        cout<<"Queue iteams : \n [  ";
        while(temp!=NULL)
        {
            cout<<temp->value<<" ";
            temp=temp->Next;
        }
        cout<<" ]\n";
    }
    void deleteQueue()
    {
         Node *temp=front;
         while (front!=NULL)
         {
            front=front->Next;
            temp=NULL;
            delete temp;
         }
         rear=NULL;
         
    }
};
int main()
{
    QueueNode que1;
    que1.enqueue(10);
    que1.enqueue(45);
    que1.enqueue(50);
    que1.enqueue(20);
    que1.enqueue(111);
    que1.display();
    cout<<que1.dequeue()<<endl;
    cout<<que1.size()<<endl;
    que1.deleteQueue();
    que1.display();
    cout<<" الله اكبر ";
    cout<<" الله اكبر ";
    cout<<" الله اكبر ";
    cout<<" الله اكبر ";
    cout<<" free palastine";
    cout<<"Now i learn github\n";

}