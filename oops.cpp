// OOPS Concept Lecture  : 

#include <iostream>
#include <string>
using namespace std;

/*
Class : A class is a blueprint or template used to create objects.
It defines what data (properties) and what behavior (functions) an object will have.

Syntax: 
        class Class_Name {
        ACCESS_Specifier : 

        // Properties : 
        datatype Variable_Name;
        datatype Variable_Name;...

        // Member Functions or Methods : 
        return_type Function_Name (Parameters){
        Executionable Code };

        };


1. Access Specifiers : Keywords that are used in programming to define who can access or use    variables, methods, or classes. And we can declare more than 1 access specifier in a class.

    => Private   : data members accessed inside class only.By default all class are Private.
    => Public    : data and members accessible to everyone.
    => Protected : data and methods accessible inside class to its derived class. 

    // If we make a class we cannot access it's values directly. But there is an indirect way to do it : by "setter" and "getter" function.


// Setter Function and Getter Function : 
    Setter: A function that sets/updates the value of a private data member.
    Getter: A function that retrieves/returns the value of a private data member.

Syntax : 
class ClassName {
private:
    data_type variable;  // private variable

public:
    void setVariable(data_type value) {   // setter
        variable = value;
    }

    data_type getVariable() {             // getter
        return variable;
    }
};

Example : 
#include <iostream>
using namespace std;

class Teacher {
private:
    string name;   // private member

public:
    // Setter
    void setName(string n) {
        name = n;
    }

    // Getter
    string getName() {
        return name;
    }
};

int main() {
    Teacher t1;
    t1.setName("Ayushman Singh");        // using setter
    cout << t1.getName() << endl;        // using getter
    return 0;
}



2. Properties : Properties in a class are variables/data members that store information about an object. Basically they are the variables that store the data about tha class and object accesses it. 
    => Example : class Student {
    string name = "Rahul"
    int class = 12}; // here name and class are the properties of the class Student here the class is private that's why we gave value inside the class only.

3. Member Functions : A member function is a function defined inside a class that works on the class data (properties).
    => Syntax : class ClassName {
    Access_Modifiers:
    Properties;

    returnType functionName(parameters){   // --> This function works as per the properties declared.
    Executionable Function Code. }
    };

    => Example : 
    class Student {
    public:      // ===> Access Specifier
        int age; // ===> Property 

    void showAge() { // ===> Member Function 
        cout << age;
    }.

    };



// Object : An object is an actual object made using that class.
It represents a real-world entity and is used to access class properties and member functions.

    => Syntax : ClassName objectName;

    => Example : 

class Student {
public:
    int age;

    void showAge() {
        cout << age;
    }
};

int main() {
    Student s1;   // object created :  "Student"= class_name, "s1"= object_name
    s1.age = 20;  // accessing property
    s1.showAge(); // calling member function
    return 0;
}

// Objects can be declared outside the main function too globally as in int main() it is locally declared.

     
*/

//Example : Class Teacher created and object made to access it's properties and methods using objects.

class teacher { // "class"= keyword, "teacher"=class name, class is written inside "{}"
    
    private :

    double salary;


    public :   // Access Specifier 
  

    // Properties or Attributes : 
    string name;
    string dept; 
    string subject;  
    

    // Methods or Member Functions  : 
    void changedept(string newdept){
        dept=newdept;
    }

    // Setter Function : 
    void setSalary (double s){ // set salary function with "s" as parameter 
        salary=s;// setting the private property "salary" with this public parameter
    }

    // Getter Function : 
    double getSalary (){ // get Salary with same datatype as Salary 
        return salary ;// to return the value that has been feed through setter function 
    }

};// ends with ";"




/*
Encapsulation :
Encapsulation in C++ means Combining data members (variables) and member functions (methods) into a single class.
 It also helps in hiding the internal details of the class (data hiding) and allowing access only through public functions (getters/setters).

 We use Encapsulation Because : 
    =>Data Hiding: Prevents external code from directly accessing and modifying internal data.
    =>Controlled Access: Only allows changes to the data through functions, so you can enforce rules.
    =>Improved Maintainability: Internal implementation can change without affecting outside code.
    =>Better Security: Reduces accidental corruption of data.

# Access Specifiers (private, public, protected) are used for data hiding !

Example :

*/







int main() {

    teacher T1 ; // Object Created : "teacher"= Class_name, "T1"= Object name

// Point to be noted : In this we used public that's why we can access like this.

    T1.name = "Ayushman Singh Parihar";  
    cout << T1.name;// Accessing the properties of class : Here "T1.name" is like a variable which is accessed and given value and then we printed it out.
    cout<<endl;
    cout<<endl;

    // T1.salary= 2500.15 // This will throw an error as it is an private property !!

    
    //So we are Calling Setter and Getter to access the Private value: 

    cout<<"Accessing and feeding into private property of a class !"<<endl;
    T1.setSalary(25005.24); // Setter called and value is given 
    cout<<endl;

    cout<<"Accessing and taking output of private property of a class !"<<endl;
    cout <<"The Salary is : " <<T1.getSalary()<<endl; // Getter called and the value given through setter is given in output 

    

    
    return 0;
}