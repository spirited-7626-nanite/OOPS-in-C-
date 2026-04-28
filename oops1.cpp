// Encapsulation, Constructor 

/*
 Constructor is a specialized feature in OOP that is created when an object is made and it is used to initialize any object. Either costructor is made by the user and if we don't make the constructor compiler makes it itself. And it is used to initialize the object. It has the same name as the class name with {} and we write initializing conditions in it.

=> Same name as class
=> Doesn't have a return type
=> Only called once (Automatically) when object is created.
=> Memory allocation of object happens only when the constructor is called 
=> We always make the constructor public as constructor is called automatically from int main()
=> We can make many constructors in a class with differnt parameters in number and return type 

Types of Constructor: 
    1. Non Parametrized : Those constructor which doesnot have any parameter in them. 
    2. Parametrized : Those constructors have parameters iin them that are declared in it.
    3. Copy Constructor : Special constructor (default) used to copy properties of one object into another. 

    !! Custom Copy Constructor : Nhi smjh aaya h !! Time Stamp : {50:20}
    Shallow Copy and Deep Copy : 
    Not Understood RN !!



this pointer : it is a special pointer in C++ that points to the current object.
they are written as : "this -> member_name"
class Person {
    int age;
public:
    void setAge(int age) {
        this->age = age;  // left: member, right: parameter
    }
};

yaha agar dekhe toh property ka naam and constructor k parameter ka naam same ho gyaa h isliye we used this pointer to distinguish between them.






Destructor : It is opposite of a constructor : used to de allocate the memory after use of object is done.
They are also default created when object is finished. 
This only deallocates the static memory only.

for dynamic memory we use new to create and delete to delete.


*/

#include <iostream>
using namespace std;

   class teacher { 
    
    private :

    double salary;


    public :   // Access Specifier 

    teacher(){  // this is the constructor made as the same name of the class and some task initialized in it so it will work as the object is made.
        // This is a non parametrized constructor as no parameter is passed in ()
    
        cout<<"Constructor called : "<<endl;
        dept="CSE AIML";
    }

    teacher( string n, string s){ // This is a parametrized constructor and when the object is made it will be entered with the parameteres. 
        name = n;
        subject = s;
    }
  

    // Properties or Attributes : 
    string name;
    string dept; 
    string subject;  
    

    // Methods or Member Functions  : 
    void changedept(string newdept){
        dept=newdept;
    }


}; // All the data members(properties) and member functions in a single unit class wrapped is called the   ENCAPSULATION

int main() {
    teacher T1; // Object made i.e. Constructor initialized and it is doing it's work
    cout <<"The Department is : "<<T1.dept<<endl;

    //Now if we make another object constructor will automatically initialize again : 
    teacher T2("Ritu Yadav", "Commerce") ; // Another Object Made 
    cout<<"Hello Mrs. "<<T2.name<<" your subject is : " <<T2.subject<<endl;

    cout<< "Now the copy constructor : "<<endl;

    teacher T3(T2); // here we used copy constructor as we passed the parameters of another constructor in it. This was a default copy constructor that was made by the c++ compiler 


    cout << T3.name;


    return 0;
}