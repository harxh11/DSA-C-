#include <bits/stdc++.h>
using namespace std;

class Parent{
    protected:
        int n1 = 1010;
    
    public:
        int num = 100;
        bool b = true;
    
    void print(){
        cout<<"Parent1 function: "<<num<<" "<<b<<" "<<n1<<endl;
    }
    
    void set(int n){
        n1 = n;
    }
};

class Parent2 {
    public:
        string str;
        double d = 1.222135554345;
        
    void print2(){
        cout<<"Parent2 Function: "<<str<<" "<<d<<endl;
    }
};

class Child : public Parent, private Parent2 {
    public:
        void setChild(string a){
            str = a;
        }
};


int main(){
    Child* ch = new Child();
    ch -> num = 100;
    ch -> set(101010);
    ch -> setChild("This is a string");
    ch -> print();
    // ch -> print2();
    return 0;
}