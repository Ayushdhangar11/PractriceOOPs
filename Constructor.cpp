#include<iostream>
using namespace std;


class Teacher {

    public:
    string name;
    string dept;
    string sub;
    int salary;

    Teacher()
    {
        cout << "Default constructor called" << endl;   
        cout << "---------------------------------------" << endl;    
    }

    Teacher(string n, string d, string s, int sal=20/*act as default value if value not present */) //parameterized constructor
    {
        this->name = n;
        this->dept = d;
        this->sub = s;
        this->salary = sal;
    }


    //copy constructor
    Teacher(const Teacher &t)
    {
        cout<<"---------------------------------------"<<endl;
        cout<<"Copy constructor called"<<endl;
        this->name = t.name;
        this->dept = t.dept;
        this->sub = t.sub;
        this->salary = t.salary;
    }


    void changeDept(string newDpt)
    {
        dept = newDpt;
    }
};

int main()
{
    Teacher t1;

    Teacher t2("Jane Smith", "Mathematics", "Calculus",60000);//object created using parameterized constructor
    t2.changeDept("Physics");
    cout << "Name: " << t2.name << endl;
    cout << "Department: " << t2.dept << endl;
    cout << "Subject: " << t2.sub << endl;
    cout << "Salary: " << t2.salary << endl;
    cout<<sizeof(t2)<<endl;
    cout<<sizeof(t1)<<endl; 
    //bioth has same size as we initalize object the sapce got reserverd for each obj doesnt matter if u assign value to it or not


    Teacher t3(t2); //copy constructor called also shallow copy
    cout << "Name: " << t3.name << endl;
    cout << "Department: " << t3.dept << endl;
    cout << "Subject: " << t3.sub << endl;
    cout << "Salary: " << t3.salary << endl;

    return 0;
}