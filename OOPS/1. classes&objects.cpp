#include <bits/stdc++.h>
using namespace std;


// Class 
class Student {
    private:            // private variables can only be accessed by member functions..
        int marks;
        string name;
        int prn;
        
    public:
        Student(int m, string n, int p){     // Constructor...
            marks = m;
            name = n;
            prn = p;
        }
        
        string getName(){        // Methods or Member functions
            return name;
        }
        void setName(string name1){
            name = name1;
        }
};


class Athlete{
    public:   // Public variables can be accessed anywhere, not only in member functions....
        string name;
        int trophies;
        int age;
    
};

int main()
{
    Student* st1 = new Student(100, "harsh", 2014);
    // st1 -> setName("Harsh jagtap");
    string a = st1 -> getName();
    cout<<a<<endl;
    
    Athlete* at1 = new Athlete;
    at1->age = 2123;                // defining public variables..
    at1->name = "Harsh Jagtap";
    at1->trophies = 5;
    return 0;
}
