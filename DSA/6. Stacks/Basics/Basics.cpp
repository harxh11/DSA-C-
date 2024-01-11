
#include <iostream>

using namespace std;

class Stack{
    int size;
    int *arr;
    int top;
    
    public: 
    Stack() {
        top = -1;
        size = 1000;
        arr = new int[size];
    }
    
    void push(int n){
        top++;
        arr[top] = n;
    }
    int pop(){
        int x = arr[top];
        top--;
        return x;
    }
    int Top(){
        return arr[top];
    }
    int Size(){
        return top + 1;
    }
    
};


int main()
{
    Stack s;
    s.push(5);
    s.push(4);
    s.push(13);
    int p = s.pop();
    int t = s.Top();
    cout<<p<<endl;
    cout<<t<<endl;
    

    return 0;
}
