#include <bits/stdc++.h>
using namespace std;

class Complex{
    public:
        int real;
        int imag;
        
    Complex(int r, int i){
        real = r;
        imag = i;
    }
    
    void print(){
        cout<<real<<" + i"<<imag<<endl;
    }
    
    
};

Complex operator+(Complex const& c1, Complex const& c2){    // + Operator Overload
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}
 
ostream & operator << (ostream &out, const Complex &c){     // << Operator Overload
    out << c.real;
    out << "+i" << c.imag << endl;
    return out;
}

int main(){
    
    Complex a(12, 2);
    Complex b(20, 10);
    
    a.print();
    b.print();
    Complex n = a + b;
    cout<<n<<endl;
    // n.print();
    return 0;
}