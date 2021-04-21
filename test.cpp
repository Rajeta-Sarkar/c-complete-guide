#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;
 
// Implement a queue using a single stack
class Queue
{
    stack<int> s;
 
public:
    // Add an item to the queue
    void enqueue(int data)
    {
        // push item into the first stack
        s.push(data);
    }
 
    // Remove an item from the queue
    int dequeue()
    {  cout<<"1\n";
        // if the stack is empty
        if (s.empty())
        {
            cout << "Underflow!!";
            exit(0);
        }
        cout<<"2\n";
        // pop an item from the stack
        int top = s.top();
        s.pop();
        cout<<"3\n";
        // if the stack becomes empty, return the popped item
        if (s.empty()) {
            return top;
            cout<<"4\n";
        }
        cout<<"5\n";
        // recur
        int item = dequeue();
 
        // push popped item back into the stack
        cout<<"6\n";
        s.push(top);
        cout<<"top "<<s.top()<<endl;
        cout<<"7\n";
        // return the result of `dequeue()` call
        return item;
    }
};
 
int main()
{
    int keys[] = { 1, 2, 3, 4 };
    Queue q;
 
    // insert the above keys into the queue
    for (int key: keys) {
        q.enqueue(key);
    }
 
    cout << "item dequed: "<< q.dequeue() << endl;    // print 1
    cout <<"item dequed: "<<  q.dequeue() << endl;    // print 2
    cout <<"item dequed: "<<  q.dequeue() << endl;    // print 1
    cout <<"item dequed: "<<  q.dequeue() << endl;
    return 0;
}