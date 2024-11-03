#include<iostream>
#include<vector>
using namespace std;
class queue{
    int *arr;
    int front=-1;
    int back=-1;
    public:
    queue(){
        arr=new int[100];
        int front=-1;
        int back=-1;
    }
    bool empty(){
        if(front>back||front==-1){
            return true;
        }
        return false;
    }
    void push(int element){
        if (back==99)
        {
            cout<<"overflow"<<endl;
            return;
        }
        back++;
        arr[back]=element;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"no element to pop"<<endl;
            return;
        }
        front++;
    }
    int peek(){
        if (front==-1 or front>back)
        {
            cout<<"No element in queue"<<endl;
            return -1;
        }
        
        return arr[front];
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.peek()<<endl;
    q.pop();
}