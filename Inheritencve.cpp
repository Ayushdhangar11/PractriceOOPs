#include<iostream>
using namespace std;


class Person{
    public:
    string name;
    int age;

    Person(string name, int age)
    {
        cout << "Person constructor called" << endl;
        this->name = name;
        this->age = age;
    }

    ~Person()
    {
        cout << "Person destructor called" << endl;
    }


};

class Student : public Person{ //single inheritance
    public:
    int rollNo;

    Student(string name, int age, int rollNo) : Person(name, age) {
        cout << "Student constructor called" << endl;
        this->rollNo = rollNo;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }

    ~Student() {
        cout << "Student destructor called" << endl;
    }
};

class JrStudent : public Student { //multilevel inheritance
    public:
    int classNo;
    JrStudent(string name, int age, int rollNo, int classNo) : Student(name, age, rollNo) {
        cout << "Junior Student constructor called" << endl;
        this->classNo = classNo;
    }

    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Class No: " << classNo << endl;
    }

    ~JrStudent() {
        cout << "Junior Student destructor called" << endl;
    }
};

int main()
{
    Student s("John", 20, 101 );//single level inheritance
    s.getInfo();

    JrStudent j("Doe", 15, 102, 10);//multi-level inheritance
    j.getInfo();

    return 0;
}
