#include <iostream>
#include <string.h>

using namespace std;

class emp{
    int id ;
    int age ;
    char name[20];
  public:
    void setId(int _id){
        id = _id;
    }
    int getId(){
        return id;
    }

    void setAge(int _age){
        if ( _age >= 30 && _age <= 60 ){
            age = _age;}
        else
            cout << "invalid ";
        }
    int getAge(){
        return age;
    }

    void setName(char* _name){
            strcpy(name,_name);
        }
    char* getName(){
        return name;
    }
};

int main()
{
    emp e1;
    emp* ptr = new emp;
    int ID , AGE ;
    char name[20];
    cout << "Enter your id : ";
    cin >> ID;
    cout << "Enter your age : ";
    cin >> AGE ;
    cout << "Enter your name : ";
    cin >> name;
    ptr->setId(ID);
    ptr->setAge(AGE);
    ptr->setName(name);
    cout << "your id is : " << ptr->getId() << " your age is : " << ptr->getAge() << " your name is : " << ptr->getName() ;
    delete ptr;
    return 0;
}
