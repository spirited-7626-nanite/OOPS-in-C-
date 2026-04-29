// Deep Copy and Destructor =>

#include <iostream>
using namespace std;


/*
    Deep Copy : 
    A Deep copy, on the other hand, not only copies the member values but also makes copies of any dynamically allocated memory that members point to.
*/
    class student {
    public: 
        string name;
        double* cgpa_ptr;

        //Constructor : 
        student(string name, double cgpa){
            this-> name = name;  
            // this-> cgpa = cgpa;
            cgpa_ptr = new double  ;
            *cgpa_ptr = cgpa;
        }

        //Copy Constructor : (deep copy)
        student (student &obj){
            this-> name = obj.name;
            cgpa_ptr = new double;  // new keyword is used to allote dynamic memory from the heap only on run time 
            *cgpa_ptr = *obj.cgpa_ptr;
        }

        ~student(){
            cout<<"Hi I am a destructor and I will destruct everything";
            delete cgpa_ptr; // delete keyword to delete dynamically alloted memory 
        }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpa_ptr<<endl;
    }


   
};


int main() {

//Deep Copy : 

    cout<<"Now the deep copy is running :\n "<<endl;

    // student object created : 

    student s1 ("Rahul Kumar",7.5);
    s1.getInfo();  // Output = "Rahul Kumar",7.5

    cout<<endl;
    // cout<<endl;


    student s2(s1);
    *(s2.cgpa_ptr)=4.33;
    s2.getInfo();  // Output = "Rahul Kumar",4.33


    
    cout<<endl;
    // cout<<endl;
    // cout<<endl;


    s1.getInfo();  // Output = "Rahul Kumar",7.5 -----> here the object 1 is not changed cause we used  new pointer this time and the change in memory resulted change for another one not interfering with this one 

    return 0;
}