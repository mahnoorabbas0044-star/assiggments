#include <iostream>
#include<string>
using namespace std;

 main()
{string correct_username="admin";
 string correct_password=" 1234";
string entered_names[3];
string username,password;
bool log_success = false;
for(int attempt = 0; attempt<3; attempt++)
    {
        cout << "Enter username : ";
        cin >> username;
        cout << "Enter password : ";
        cin >> password;
        if(username == correct_username && password == correct_password)
        {log_success=true;
            break;
        }else{cout << "    "<<endl;
        }
    }if (log_success=true){
    cout<<" Login successful!"<<endl;
    string student_Names[3];
    int stu_ages[3];
    int stu_count=0;
    string courses[3];
    int course_count = 0;
    int choice;
    do {cout << endl<<"-------- University Management System --------"<<endl;
        cout << "1. Add student " << endl;
        cout << "2. View student "<< endl;
        cout << "3. Add course" << endl;
        cout << "4. View Courses " << endl;
        cout<<  "5. Exit "<<endl;
        cout << "Enter choice : ";
        cin >> choice ;
        if(choice == 1){
            if(stu_count<3)
        {cout << "Enter Student Name : ";
            cin >> student_Names[stu_count];
        cout << "Enter Student Age : ";
            cin >> stu_ages[stu_count];
            stu_count++;
        cout << "Student added successfully "<< endl;
        }else{cout<<" "<<endl;}}
        else if(choice == 2)
        {cout<<"\n---STUDENTS---"<<endl;
            if(stu_count==0){
                cout<<" no student is added "<<endl;}else{
                    for(int i=0;i<stu_count;i++){
                cout << "Student Name : " << student_Names[i] << endl;
                cout << "Student Age : " << stu_ages << endl;}}}
        else if(choice == 3){if(course_count<3){
            cout << " Enter Course Name: ";
            cin >> courses[course_count];
            course_count++;
            }else{
                cout<<"   "<<endl;
            }}
        else if(choice == 4)
        {cout << " \n---COURSES--- "<< endl;
            if(course_count==0){cout<<"   "<<endl;}else{
                for(int i=0;i<course_count;i++){
                    cout<<" Course : "<<courses[i]<<endl;
                }
            }}
        else if (choice ==5)
        {cout << " Exiting Program "<< endl;}else{
            cout<<"    "<<endl;
        }
        
}while(choice!=5);}
return 0;}
