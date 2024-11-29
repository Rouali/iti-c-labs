#include <iostream>
using namespace std;
void Swap(int& num1 , int& num2){
    int temp = num1 ;
    num1 = num2;
    num2 = temp;

}
int main()
{
    int x,y;
    cout << "Enter number1 : ";
    cin >> x;
    cout << "Enter number2 : ";
    cin >> y;
    Swap(x,y);
    cout << "number1 :" << x << " number2 : " << y ;

    return 0;
}
