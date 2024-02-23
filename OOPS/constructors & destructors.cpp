#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
        int age;
        string company;
    
    //Default Constructor
    
    Employee(){
        age = 40;
        company = "TCS";
    }
    
    //Parameterized Constructor
    
    Employee(int a, string c){
        age = a;
        company = c;
    }
    
    // Copy Constructor
    
    Employee(const Employee& newEmployee){
        age = newEmployee.age;
        company = newEmployee.company;
    }
    
    ~Employee (){
        cout<<"Destruction invoked for Employee class..."<<endl;   
    }
    void print(){
        cout<<"Age is "<<age<<" and Company is "<<company<<endl;
    }
};

class Department{
    public:
        string name;
    
    Department(){
        cout<<"Constructor called for Department class.."<<endl;
    }
    
    ~ Department(){
        cout<<"Destructed Department class"<<endl;
    }
};


// Dynamic Constructor

class Employee1 {
  int* due_projects;

  public:
  
    // Default constructor.
    
    Employee1() {           // Allocating memory at run time.
      due_projects = new int;
      *due_projects = 0;
    }

    // Parameterized constructor.
    
    Employee1(int x) {
      due_projects = new int;
      *due_projects = x;
    }
    
    void display() {
      cout << *due_projects << endl;
    }
    

};




int main(){
    
    Employee* e1 = new Employee;
    e1 -> print();   // Default
    
    Employee e2(44, "Google");
    e2.print();      // Parameterized
    
    Employee e3(e2);
    e3.print();      // Copy
    
    Employee1 employee2 = Employee1(10);
    cout << "Due projects for employee2:\n";
    employee2.display();  // Dynamic
    
    // Destructors
    Department d1;
    
    return 0;
}
