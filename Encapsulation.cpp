#include<iostream>
using namespace std;


class Teacher {

    public:
    string name;
    string dept;
    string sub;
    int salary;

    void changeDept(string newDpt)
    {
        dept = newDpt;
    }
};


class Account{ // wrapper for props and method in single unit Class
    private:
    double balance;
    string password; //data hiding  achieve using private keyword 

    public:
    string accID;
    string user;
    
};


int main()
{
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "Computer Science";
    t1.sub = "Data Structures";
    t1.salary = 50000;

    cout << "Department: " << t1.dept << endl;

    t1.changeDept("Mathematics");

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.sub << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
}