#include <iostream> 

class Complex { 
    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend void sort(Complex[], int);
public: 
    Complex();
    Complex(int,int);
    Complex& operator=(const Complex&);
    
    Complex& operator+(const Complex&);
    Complex& operator*(int);

    double abs();

private:
    int real;
    int img;
};
