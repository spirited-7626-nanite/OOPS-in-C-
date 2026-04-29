/*
Constructor: 
this constructor : a special pointer that points to current object 

this->  is same as  *(this).prop
*/




/*

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


*/

#include <iostream>
using namespace std;

   class teacher { 
    
    private :

    double salary;


    public :  
    
    string tname; // Properties 
    string tdept; 
    string tsubject;  

    // teacher(){  
    
    //     cout<<"Constructor called : "<<endl;
    //     dept="CSE AIML";
    // }

    teacher( string tname, string tsubject){ 
        this->tname = tname;
        this->tsubject = tsubject;     // here this->"name" refers it is the object property that is used in the constructor by "this" pointer
        
        // this can be written as 

        /*
        *(this).name=name
        *(this).subject=subject    // here we use dereferencing and with this pointer
        */
    }
      
    void changedept(string newdept){
        tdept=newdept;
    }


    // copy constructor : 
    teacher(teacher &orgObj){// pass by reference
        this->tname = orgObj.tname;
        this->tdept = orgObj.tdept;
        this->tsubject = orgObj.tsubject;
        // this->tsalary = orgObj.salary;
        cout <<"this is custom copy constructor";
    }


/*
Shallow Copy and Deep Copy: 
A Shallow copy of an object copies all of the member values from one object to another. Normally we have shallow copy only jo abhi kiya tha 



*/



}; 

int main() {
    // teacher T1; 
    // cout <<"The Department is : "<<T1.dept<<endl;

    
    teacher T2("Ritu Yadav", "B.Com.") ; 
    cout<<"Hello Mrs. "<<T2.tname<<" your subject is : " <<T2.tsubject<<endl;

    // cout<< "Now the copy constructor : "<<endl;
    // teacher T3(T2); // here we used copy constructor as we passed the parameters of another constructor in it. This was a default copy constructor that was made by the c++ compiler 

    // cout << T3.name;

    teacher T4(T2); // This is our custom copy constructor 


    return 0;
}