#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // properties / atrributes
    string Name;
    string dept;
    string sub;


    // methods / member function
    void changeDept (string newDept){
        dept = newDept;
    }

    // setter function for set the value of private data
    void setSalary(double s){
        salary = s;
    }

    //  getter function for get the private data
    double getSalary() {
        return salary;
    }

};

int main() {
    Teacher t1;    // t1 object created

    // access of object using dot 
    t1.Name = "Dinesh";
    t1.dept = "CS";
    t1.sub = "c++";
    // t1.salary = 25000;     salary is private so we can not use or access

    // using getter and setter for accessing private data
    t1.setSalary(25000);

    cout<<t1.getSalary()<<endl;

    cout<<t1.Name<<endl;

}