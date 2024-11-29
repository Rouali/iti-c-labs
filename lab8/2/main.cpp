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
    int ID , AGE ;
    cout << "Enter your id : ";
    cin >> ID;
    cout << "Enter your age : ";
    cin >> AGE ;
    char name[20];
    cout << "Enter your name : ";
    cin >> name;
    e1.setId(ID);
    e1.setAge(AGE);
    e1.setName(name);
    cout << "your id is : " << e1.getId() << " your age is : " << e1.getAge() << " your name is : " << e1.getName() ;
    return 0;
}
