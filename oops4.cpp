/*
Inheritance : 
When properties ad member functions of the base class are passed to the derived class. 

syntax : 
class derived_name : access modifier parent_name {
};

When a object is made then complier sees the object and check of it's class and then he sees is this class inherited or not if inherited it first initializes the parent classs as it is required so first constructor of parent class is initialized then the child class' constructor.

and in the case of destructor first child memory is de allocated and then parent memory.

if we are using parametrized constructor of parent then we have to mention it in child constructor as : 

parent_cons(para1, pare2){
program}

child_cons() : parent_cons(para1, para2){
program}


*/ 

#include <iostream>
using namespace std;

class person {  // This will be our parent class 
    public : 
     string name;
     int age;

     person(string name, int age){
        this-> name = name;
        this-> age = age;

        cout<<"Parametrized Constructor of parent class is called !"<<endl;
     }

     person(){
       cout<<"Constructor of parent class is called !"<<endl;
    }

    ~person(){
    cout<<"The destructor of parent class is called !"<<endl;
}



};


class student : public person{ // here person is inherited with " : " and access modifier and then parent class name.

// requirement : name, age , roll no => we can inherit name and age from person !

public : 

int roll_no ;


 student(){
       cout<<"Constructor of child class is called !"<<endl
       ;
    }

 student(string name , int age, int roll_no) : person(name, age)
 {
    this->roll_no = roll_no;
    cout<<"Parametrized Constructor of child class is called !"<<endl;
    }

void getInfo (){

    cout<<"Name : "<< name << endl ;
    cout<<"Age : "<< age << endl ;
    cout<<"Roll no. : "<< roll_no << endl ;

}


~student(){
    cout<<"The destructor of child class is called !"<<endl;
}

};

int main() {
    
    // person p1;
    // p1.name = "Dev";
    // p1.age = 20;

    // student s1;
    // s1.name = "Dev";
    // s1.age = 20;  // we didn't gave these properties to this class but it inherited from person 
    // s1.roll_no = 45;
    // s1.getInfo();

    student s1("Rahul",18,1234);
    s1.getInfo();

    return 0;
}