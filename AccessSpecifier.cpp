#include<iostream>
using namespace std;


class Teacher {

    private:
    int salary;


    public:
    string name;
    string dept;
    string sub; 


    void changeDept(string newDpt)
    {
        dept = newDpt;
    }

    void setSalary(int newSalary)
    {
        salary = newSalary;
    }

    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher t1;
    t1.name = "John Doe";
    t1.dept = "Computer Science";
    t1.sub = "Data Structures";
    t1.setSalary(50000);

    cout << "Department: " << t1.dept << endl;

    t1.changeDept("Mathematics");

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.sub << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}