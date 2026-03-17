#include <iostream>
using namespace std;

int main()
{string username, password;
string studentName = "";
int studentAge = 0;
string courseName = "";
int choice;
for(int i = 1; i <= 3; i++)
    {
        cout << "Enter username : ";
        cin >> username;
        cout << "Enter password : ";
        cin >> password;
        if(username == "admin" && password == "1234")
        {cout << "Login Successful"<<endl;
            break;
        }else{cout << " Wrong Login "<<endl;
        }if(i == 3 && !(username == "admin" && password == "1234"))
        {cout << "Too many attempts . Program end." << endl;}
    }for(int i = 1; i <= 5; i++)
    {cout << endl<<"-------- University Management System --------"<<endl;
        cout << "1. Add student " << endl;
        cout << "2. View student "<< endl;
        cout << "3. Add course" << endl;
        cout << "4. Exit " << endl;
        cout << "Enter choice : ";
        cin >> choice ;
        if(choice == 1)
        {cout << "Enter Student Name : ";
            cin >> studentName;
        cout << "Enter Student Age : ";
            cin >> studentAge;
        cout << "Student added successfully "<< endl;
        }
        else if(choice == 2)
        {if(studentName != ""){
                cout << "Student Name : " << studentName << endl;
                cout << "Student Age : " << studentAge << endl;}
            else
            {cout << " No Student Record Found "<< endl;}
        }else if(choice == 3){
            cout << " Enter Course Name: ";
            cin >> courseName;
            cout << " Course Added : " << courseName << endl;}
        else if(choice == 4)
        {cout << " Program exit "<< endl;
         break;}
        else
        {cout << " Invalid  choice "<< endl;}
}}
