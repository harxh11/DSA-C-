#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        
    Person(string n, int a){
        name = n;
        age = a;
    }
    
    void print(){
        cout<<"Name is: "<<name<<" and Age is: "<<age<<endl;
    }
};

class Student : public Person {
    public:
        int marks;
        string branch;
        
    Student(string n, int a, int m, string b) : Person(n, a){
        marks = m;
        branch = b;
    }

    int Marks(){
        cout<<"POLYMORPHISM IN C++"<<endl;
        return marks;
    }
    int Marks(int marks){
        cout<<"Function Overload with 1 integer argument.."<<endl;
        return marks;
    }
    int Marks(int m, int perc){
        cout<<"Function Overload with 2 arguments.."<<endl;
        return marks;
    }
    int Marks(string n){
        cout<<"Function Overload with 1 string argument.."<<endl;
        return marks;
    } 
};

int main()
{
    Student* st1 = new Student("Harsh", 21, 12, "CSE");
    st1 -> print();
    st1 -> Marks();
    st1 -> Marks(100);
    st1 -> Marks(100, 20);
    st1 -> Marks("Harsh");
    return 0;
}
