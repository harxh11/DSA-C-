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
    
    void setBase(string a){
        att2 = a;
    }
    
    void print(){
        cout<<att1<<" "<<att2<<" "<<att3<<endl;
    }
};

class Derived : public Base {
    public:
        void setDerived(int a){
            att1 = a;
        }
        Derived(int a1 = 0, string b1 = "hehe", bool c1=true) : Base (a1, b1, c1){
            
        }
};

class SecondDerived : public Derived {
    
};



int main(){
    
    Base* item = new Base(10, "Harsh", true);
    item -> print();
    
    Derived* item1 = new Derived();
    item1 -> att1 = 300;
    item1 -> att2 = "This is a string";
    item1 -> print();
    item1 -> setDerived(100);
    item1 -> setBase("This is Polymorphism by the way");
    item1 -> print();
    Derived* sub = new Derived(10, "HDHD", false);
    sub -> print();
    SecondDerived* sd = new SecondDerived();
    sd -> att1 = 1000;
    sd -> att2 = "Multiple Inheritance";
    sd -> att3 = false;
    sd -> print();
    return 0;
}