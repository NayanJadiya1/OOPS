
#include <iostream>
using namespace std;
int main()
{
    int age;
    float marks;
    char grade;
    string name;
    const float PI = 3.14;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your marks: ";
    cin >> marks;
    cout << "Enter your grade: ";
    cin >> grade;
    float bonus = 5.0;
    float total = marks + bonus;
    int nextAge = age + 1;
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Next Year Age: " << nextAge << endl;
    cout << "Marks: " << marks << endl;
    cout << "Bonus Marks: " << bonus << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of PI: " << PI << endl;
    cout << "\nKeep learning and work hard for success!" << endl;
    return 0;
}
