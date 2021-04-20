#include <iostream>

using namespace std;

class Vector {
public:
    Vector(int s) :elem{new double[s]}, sz{s} { } // construct a Vector
    // Vector(int s) declares a constructor of Vector, that receives an int and 
    // has a member initializer list. 
    double& operator[](int i){ return elem[i]; } // element access: subscripting
    int size() { return sz; }
private:
    double* elem; // pointer to the elements
    int sz; // the number of elemtns
};

double read_and_sum(int s)
{
    Vector v(s); // make a vector of s elements
    for (int i = 0; i != v.size(); ++i)
        cin >> v[i];            // read into elements
    
    double sum = 0;
    for (int i = 0; i != v.size(); ++i)
        sum += v[i];            // take the sum of the elements
    return sum;
}

int main(){
    double sum = read_and_sum(5);
    cout << "oi\n";
    cout << sum << '\n';
}