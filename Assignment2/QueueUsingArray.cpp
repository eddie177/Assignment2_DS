#include <iostream>
using namespace std; 
class Queue{
int front = 0, rear = 0;
int array[10];
int counter = 0;
   public:
    int enqueue(int data)
    {
        if(rear == 10)
        {
            cout<<"Queue is Full";
            return -1;
        }
        array[rear] = data;

        rear++;
        counter++;
    }
   int dequeue()
   {
        if(front == rear)
        {
            cout<<"Queue is Empty";

            return -1;
        }

        counter--;
        front++;
        return array[front - 1];
   }

    int display()
    {
        for(int i = front; i <= counter; i++)
        {
            cout << array[i] <<"\n";
        }
    }

};
int main(){

    Queue a;

    a.enqueue(10);
    a.enqueue(20);
    a.enqueue(30);

    cout<< a.dequeue() << "\n";
    cout << a.dequeue() << "\n";
    cout << a.dequeue() << "\n";
    cout << "Ahmed Ehab Mohmaed Rashad || G1 " << endl;
    
}
