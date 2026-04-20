#include <iostream>
using namespace std;
const int Max = 100;
bool login();
void menu();
void addStu(string names[], int ages[], int &count);
void viewStu(string names[], int ages[], int count);
void addCourse(string courses[], int &courseCount);
// Main Function
int main()
{
    if (!login())
        return 0;
    string studentNames[Max];
    int studentAges[Max];
    string courses[Max];
    int studentCount = 0;
    int courseCount = 0;
    int choice;
    while (true)
    {
        menu();
        cin >> choice;
        if (choice == 1)
        {
            addStu(studentNames, studentAges, studentCount);
        }
        else if (choice == 2)
        {
            viewStu(studentNames, studentAges, studentCount);
        }
        else if (choice == 3)
        {
            addCourse(courses, courseCount);
        }
        else if (choice == 4)
        {
            cout << "Program Exit" << endl;
            return 0;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}
bool login()
{
    string username, pass;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> pass;
        if (username == "admin" && pass == "1234")
        {
            cout << "Login Successful" << endl;
            return true;
        }
        else
        {
            cout << "Wrong Login" << endl;
        }
    }
    cout << "Too many attempts. Program End." << endl;
    return false;
}
void menu()
{
    cout << "\n---- University Management System ----" << endl;
    cout << "1. Add Student" << endl;
    cout << "2. View Students" << endl;
    cout << "3. Add Course" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter Choice: ";
}
void addStu(string names[], int ages[], int &count)
{
    if (count >= Max)
    {
        cout << "Storage Full!" << endl;
        return;
    }
    cout << "Enter Student Name: ";
    cin >> names[count];
    cout << "Enter Student Age: ";
    cin >> ages[count];
    count++;
    cout << "Student Added Successfully" << endl;
}
void viewStu(string names[], int ages[], int count)
{
    if (count == 0)
    {
        cout << "No Student Record Found" << endl;
        return;
    }
    cout << "\n--- Student List ---" << endl;
    for (int i = 0; i < count; i++)
    {
        cout << "Student " << i + 1 << endl;
        cout << "Name: " << names[i] << endl;
        cout << "Age: " << ages[i] << endl;
        cout << "-------------------" << endl;
    }
}
// Add Course
void addCourse(string courses[], int &courseCount)
{
    if (courseCount >= Max)
    {
        cout << "Course Storage Full!" << endl;
        return;
    }
    cout << "Enter Course Name: ";
    cin >> courses[courseCount];
    courseCount++;
    cout << "Course Added Successfully" << endl;
}