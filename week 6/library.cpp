#include <iostream>
#include <string>
using namespace std;
 main() {
    int max = 100;  
    string books[max];
    int tot_Books = 0;
    int choice;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Books\n";
        cout << "2. View Books\n";
        cout << "3. Borrow Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "How many books do you want to add? ";
                cin >> n;
                cin.ignore();
                for (int i = 0; i < n; i++) {
                    if (tot_Books < max) {
                        cout << "\nEnter book name "<<i+1<<" : ";
                        getline(cin, books[tot_Books]);
                        tot_Books++;
                    } else {
                        cout << "   " <<endl;
                        break;
                    }
                }
                break;
            }
            case 2: {
                cout << "\nBooks in Library:\n";
                if (tot_Books == 0) {
                    cout << "  \n";
                } else {
                    for (int i = 0; i < tot_Books; i++) {
                        cout << i + 1 << ". " << books[i] << endl;
                    }
                }
                break;
            }
            case 3: {
                int num;
                cout << "Enter book number to borrow: ";
                cin >> num;
                if (num > 0 && num <= tot_Books) {
                    cout << "You borrowed: " << books[num - 1] << endl;
                } else {
                    cout << "    \n";
                }
                break;
            }
            case 4: {
                cin.ignore();
                string issued;;
                cout << "Enter book name to issue : "<<endl;
                getline(cin, issued);
                for (int i=0;i<tot_Books;i++) {
                    if(books[i] == issued){
                    cout << "Your Book has been  issued .\n";
                }
                }break;
            }
            case 5:
                cout << "Exiting Library System...\n";
                break;
        }
    } while (choice != 5);return 0;
}
