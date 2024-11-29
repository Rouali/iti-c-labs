#include <iostream>

using namespace std;
class complex{
    int real ;
    float imag ;
public:
    void setReal(int _real){
        real = _real;
    }
    int getReal(){
        return real;
    }
    void setImag(float _imag){
        imag = _imag;
    }
    float getImag(){
        return imag;
    }

};
void Complex(complex num1){
    cout << "number is : " << num1.getReal() << " + " << num1.getImag() << " i";
}
int main()
{
    complex num1;
    int x ;
    float y ;
    cout << "Enter real part : ";
    cin >> x ;
    cout << "Enter imaginary part : ";
    cin >> y;
    num1.setReal(x);
    num1.setImag(y);
    Complex(num1);
    return 0;
}
