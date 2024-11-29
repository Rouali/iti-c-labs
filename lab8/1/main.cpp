#include <iostream>
#include <string.h>

using namespace std;
struct emp{
    int id;
    int age;
    char name[20];
};

int main()
{
    emp e1 ;
    int ID , AGE ;
    char n[20];
    cout << "Enter your id :";
    cin>> ID ;
    cout << "Enter your name :";
    cin>>n;
    cout << "Enter your age :";
    cin>> AGE;
    e1.id = ID;
    strcpy(e1.name , n);
    e1.age = AGE ;
    cout << " Your id is : " << e1.id << " your name is : " << e1.name << " your age is : " << e1.age << endl;
    return 0;
}
