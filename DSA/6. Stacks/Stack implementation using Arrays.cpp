// Implementing STACK using ARRAY

# include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int size;
        int top = 0;
        vector<int> arr;
        
    Stack(int s){
        size = s;
        vector<int> a(s);
        arr = a;
    }
    
    void push(int el){
        if(top >= size){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        else {
            arr[top] = el;
            top++;
            cout<<"Element Pushed into Stack.."<<endl;
        }
    }
    
    void pop(){
        if(top <= 0){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        else {
            top--;
            cout<<arr[top]<<" - Element popped"<<endl;
        }
    }
    
    void display(){
        if(top == 0){
            cout<<"Stack is Empty!"<<endl;
            return;
        }
        cout<<"The Stack is: ";
        for(int i = 0; i < top; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};



int main(){
    
    Stack st(5);
    
    st.display();
    st.push(10);
    st.push(12);
    st.push(15);
    st.push(16);
    st.display();
    
    st.pop();
    st.pop();
    st.push(12);
    st.push(15);
    st.push(12);
    st.push(15);
    
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    
    st.display();
    
    return 0;
}
