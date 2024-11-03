#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define ll long long 
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short
#define loop(j,n) for(int i = j; i < n;i++)
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
typedef vector<ll> vll;

const int M=1e9+7;
class Stack{
    int arr[100];
    int top1;
    // int size1;
    public:
    Stack(){
        top1=-1;
        // size1=n;
    }
    void push(int ele){
        if(top1==99){
            cout<<"Overflow"<<endl;
            return;
        }
        top1++;
        arr[top1]=ele;
    }
    void pop(){
        if(top1==-1){
            cout<<"Underflow"<<endl;
            return;
        }

        top1--;
    }
    int top(){
        if(top1==-1){
            cout<<"The array is empty"<<endl;
            return -1;
        }
        return arr[top1];
    }
    int size(){
        return top1+1;
    }
    bool empty(){
        return top1==-1;
    }
};  
class Queue{
    int arr[500];
    int front;
    int back;
    public:
    Queue(){
        front=0;
        back=-1;
    }
    int enQueue(int item){
        if(back==499){
            cout<<"OVERFLOW"<<endl;
        }
        back++;
        arr[back]=item;
    }
    void deque(){
        if(front>back){
            cout<<"UNDERFLOW"<<endl;
        }
        front++;
    }
    int top(){
        if(front>back){
            return -1;


        }
        return arr[front];
    }
    int size(){
        return back+1;
    }
    bool empty(){
        return front>back;
    }
};

void solve(){
    Queue q;
    q.enQueue(3);
    cout<<q.size()<<endl;
    cout<<q.top()<<endl;
    q.deque();
    cout<<q.size()<<endl;
    q.deque();
}
int main(){
    int t;
    // cin>>t;
    t=1;
    while(t--){
        solve();
    }
}