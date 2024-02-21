#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
        int att1;
        string att2;
        bool att3;
        
    Base(int a, string b, bool c){
        att1 = a;
        att2 = b;
        att3 = c;
    }
    
    void print(){
        cout<<att1<<" "<<att2<<" "<<att3<<endl;
    }
};

class Derived : public Base {
    public:
        void set(int a){
            att1 = a;
        }
        Derived(int a1 = 0, string b1 = "hehe", bool c1=true) : Base (a1, b1, c1){
            
        }
};


int main(){
    
    Base* item = new Base(10, "Harsh", true);
    item -> print();
    
    Derived* item1 = new Derived();
    item1 -> print();
    item1 -> set(100);
    item1 -> print();
    Derived* sub = new Derived(10, "HDHD", false);
    sub -> print();
    return 0;
}